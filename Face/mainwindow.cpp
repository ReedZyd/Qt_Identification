#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "roundprogressbar.h"
#include <string.h>
#include <stdio.h>
#include <vector>
using namespace std;
int age_list[10];
int picture_number=0;
std::string gender_show=" ";
std::string age_show=" ";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStringList args = QCoreApplication::arguments();
    timer = new QTimer(this);

    string video = args.at(1).toStdString();
    if(video.size() > 1)
    {
        cap = cv::VideoCapture(video);
        std::cout << "Reading frame from video!" <<std::endl;
    }
    else
    {
        cap = cv::VideoCapture(std::stoi(video));
        std::cout << "Reading frame from camera!" << std::endl;
    }
    if(!this->cap.isOpened())
        QMessageBox::warning(this, "Warning", "Can't open camera!");

    std::string indexf = args.at(2).toStdString();   // index file
    this->fg = new FeatureGroup(indexf, &this->sf);

    connect(timer, SIGNAL(timeout()), this, SLOT(grabFace()));
    timer->start(30);

    rpb = new QRoundProgressBar(ui->similar);
    rpb->setGeometry(0,0,160,160);
    rpb->setValue(0);
    this->showFullScreen();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    system("rm -rf /home/wj/Qt/Qt_face/Face_release/img_real/*.jpg");
    system("rm -rf /home/wj/Qt/Qt_face/Face_release/img_real_/*.jpg");
    ofstream outf_close;
    outf_close.open("/home/wj/Qt/Qt_face/Face_release/img_real/images_list.txt");
    outf_close <<" "<< endl;
    outf_close.close();
    this->close();
}

void MainWindow::showTopK(std::vector<Feature> result)
{

    QStringList args = QCoreApplication::arguments();

    int age_num;
    int age_filter_num=8;
    int age_abort_num=3;


    std::string headpath = args.at(3).toStdString(); // icon folder
    QSize s = ui->face->size();
    string age_gender[1024]={"0"};
    int i=0;
    string buf;
    ifstream inf;
    inf.open("/home/wj/Qt/Qt_face/SSR-Net/demo/img_test/result_new.txt");
    if(inf.is_open())
        {
            while(getline(inf,buf))
            {
                age_gender[i]=buf;
                //temp>>results[i]
                i++;
            }
        }
    age_gender[i]="\0";
    inf.close();
    string nan="nan";
    if(age_gender[0]==nan)
    {
        gender_show=" 未知";
    }
    else
    {
        if(std::stoi(age_gender[0])<0.5)
                gender_show="女";
            else
                gender_show="男";

    }

    string age=age_gender[1];

    if(age_gender[1]==nan)
        {
            age_show=" 未知";
        }
        else
        {

            if((age_num+age_filter_num)%age_filter_num==0)
            {
                //std::cout<<"+++"<<endl;std::cout<<age<<endl;
                age_list[(age_num+age_filter_num)%age_filter_num]=std::stoi(age);

                //std::cout<<"---"<<endl;

                sort(age_list,age_list+age_filter_num);

                int age_real=0;
                for(int m=age_abort_num;m<(age_filter_num-age_abort_num);m++)
                {
                    age_real+=age_list[m];
                    //cout<<m<<":"<<age_list[m]<<endl;
                }
                //cout<<"******"<<endl;
                //cout<<round(age_real/6.0)<<endl;
                double q=double(age_filter_num-2*age_abort_num);
                //std::cout<<q<<endl;
                age_real=round(age_real/q);
                //cout<<age_real<<endl;

                age_show=std::to_string(int(age_real));
            }
                else
            {
               age_list[(age_num+age_filter_num)%age_filter_num]=std::stoi(age);
            }
            age_num++;


        }









    if(result[0].similarity_with_goal<0.55){
        QImage why(QString::fromStdString(headpath + "/" + "why.jpg"));
        ui->face->setPixmap(QPixmap::fromImage(why.scaled(s, Qt::KeepAspectRatio)));
        ui->name->setText(QString::fromStdString("未知"));
        ui->post->setText(QString::fromStdString(" 未知"));
        rpb->setValue(result[0].similarity_with_goal*100);

    }
    else{
        QImage top1(QString::fromStdString(headpath + "/" + result[0].filename));
        ui->face->setPixmap(QPixmap::fromImage(top1.scaled(s, Qt::KeepAspectRatio)));
        int len = result[0].filename.size();
        string name_post = result[0].filename.substr(0, len-4);

        string pattern = "-";
        string strs = name_post + pattern;
        size_t pos = strs.find(pattern);
        vector<string> res;
        while(pos != strs.npos)
        {
            string temp = strs.substr(0, pos);
            res.push_back(temp);
            strs = strs.substr(pos+1, strs.size());
            pos = strs.find(pattern);
        }
        string name = res[0];
        string post = " "+res[1];
        string gender = " "+res[2];
        //std::cout<<name<<std::endl<<post<<std::endl;

        ui->name->setText(QString::fromStdString(name));
        ui->post->setText(QString::fromStdString(post));
        ui->gender->setText(QString::fromStdString(" "+gender_show));

        //result[0].similarity_with_goal += 0.2;
        if(result[0].similarity_with_goal>=0.55&&result[0].similarity_with_goal<0.7){
            result[0].similarity_with_goal +=0.1;
        }
        rpb->setValue(result[0].similarity_with_goal*100);
    ui->age->setText(QString::fromStdString(" "+age_show));
    ui->gender->setText(QString::fromStdString(gender));
    }
    //face 1
    //QImage top1(QString::fromStdString(headpath + "/" + result[0].filename));
    //ui->face->setPixmap(QPixmap::fromImage(top1.scaled(s, Qt::KeepAspectRatio)));
    /*int len = result[0].filename.size();
    string name_post = result[0].filename.substr(0, len-4);

    string pattern = "-";
    string strs = name_post + pattern;
    size_t pos = strs.find(pattern);
    vector<string> res;
    while(pos != strs.npos)
    {
        string temp = strs.substr(0, pos);
        res.push_back(temp);
        strs = strs.substr(pos+1, strs.size());
        pos = strs.find(pattern);
    }
    string name = res[0];
    string post = " "+res[1];
    //std::cout<<name<<std::endl<<post<<std::endl;

    ui->name->setText(QString::fromStdString(name));
    ui->post->setText(QString::fromStdString(post));
    result[0].similarity_with_goal += 0.2;
    if(result[0].similarity_with_goal>0.85){
        result[0].similarity_with_goal -=0.15;
    }
    if(result[0].similarity_with_goal<0.6){
        result[0].similarity_with_goal+=0.1;
    }
    rpb->setValue(result[0].similarity_with_goal*100);*/

}

void MainWindow::grabFace()
{
    if(0)
    {
        cv::Mat src;
        this->cap >> src;
        cv::resize(src, this->frame, cv::Size(640,360));
    }
    else
        this->cap >> this->frame;

    float feat[2048];
    cv::Rect face_rect;
    cv::Rect face_rect_temp;
    std::vector<Feature> result;

    //cv::Rect rec(0,0,640,240);   //this setting is aimed at video.mp4
    //if(sf.GetFeature(this->frame(rec), feat))
    if(sf.GetFeature(this->frame, feat))
    {
        int max_num=0;
        for(int32_t n =0; n<sf.face_num;n++)
         {
           if(sf.bbox[n].width>sf.bbox[max_num].width)
             {
               max_num=n;
               std::cout<<max_num<<std::endl;
             }
        }
        //if(sf.bbox[max_num].width>50){

         face_rect.x = sf.bbox[max_num].x;
         face_rect.y = sf.bbox[max_num].y;
         face_rect.width = sf.bbox[max_num].width;
         face_rect.height = sf.bbox[max_num].height;
         //std::cout<<sf.bbox[max_num].width<<std::endl;

          if(0 <= face_rect.x && 0 <= face_rect.width && face_rect.x + face_rect.width <= this->frame.cols && 0 <= face_rect.y && 0 <= face_rect.height && face_rect.y + face_rect.height <= this->frame.rows)
          {
              picture_number+=1;
              cv::Mat m = this->frame(face_rect);
              float ad=0.4;
              if (picture_number%4==0)
              {
                  cv::Mat frame_temp;
                  cv::resize(this->frame, frame_temp,cv::Size(1024,int(1024*this->frame.rows/this->frame.cols)));
                  face_rect_temp.x= max(int((1024.0/this->frame.cols)*(face_rect.x - ad * face_rect.width)), 0);
                  face_rect_temp.y= max(int((1024.0/this->frame.cols)*(face_rect.y - ad * face_rect.height)), 0);
                  face_rect_temp.width= min(int((1024.0/this->frame.cols)*(face_rect.x+face_rect.width + ad * face_rect.width)), frame_temp.cols - 1)-face_rect_temp.x;
                  face_rect_temp.height= min(int(1.05*(1024.0/this->frame.cols)*(face_rect.y+face_rect.height + ad * face_rect.height)), frame_temp.rows - 1)-face_rect_temp.y;

                  cv::Mat m_save_temp=frame_temp(face_rect_temp);

                  cv::Mat m_save;
                  cv::Mat m_save_cvt;
                  cv::resize(m_save_temp, m_save_cvt,cv::Size(64,64));
                  cv::cvtColor(m_save_cvt,m_save,cv::COLOR_BGR2RGB);
                  cv::imwrite("/home/wj/Qt/Qt_face/Face_release/img_real_/"+to_string(picture_number)+".jpg",m_save);

                  ofstream outf;
                  outf.open("/home/wj/Qt/Qt_face/Face_release/img_real/images_list.txt",ios::trunc);
                  outf <<"/home/wj/Qt/Qt_face/Face_release/img_real/"+to_string(picture_number)+".jpg"<< endl;
                  outf.close();
                  std::rename("/home/wj/Qt/Qt_face/Face_release/img_real/images_list.txt","/home/wj/Qt/Qt_face/Face_release/img_real/images_list_new.txt");
                  std::cout<<endl;



              }


              QImage img = Mat2QImage(m);
              QPixmap pix = QPixmap::fromImage(img);
              QPixmap fitmap=pix.scaled(ui->video_face->width(),ui->video_face->height(), Qt::KeepAspectRatio);
              ui->video_face->setPixmap(fitmap);

          }

         cv::rectangle(this->frame, face_rect, CV_RGB(0, 255, 0), 2, 8, 0);

         sf.bbox.clear();
         this->fg->FindTopK(TPK, feat, result);
         this->showTopK(result);
        //}

    }
    QImage img = Mat2QImage(this->frame);
    QPixmap pix = QPixmap::fromImage(img);
    QPixmap fitmap=pix.scaled(ui->video->width(),ui->video->height());
    ui->video->setPixmap(fitmap);



}
