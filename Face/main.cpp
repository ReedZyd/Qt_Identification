#include "mainwindow.h"
#include <QApplication>
#include "thread"
int face_thread(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 3 arguments: saving features of images in given folder into a file
    // argv[1]: images folder
    // argv[2]: name of saved file
    //default: /home/wj/Qt_age/Face/image/test test.index
    if(argc == 3)
    {
        string path = argv[1];
        string name = argv[2];
        saveAllFeature(path, name);
        return 0;
    }
    // 4 arguments: video/cam   .index file    icon folder
    //default: video.mp4 71.index /home/wj/Qt/Face/image/photo_icon
    //default: 0 test.index /home/wj/Qt/Face/image/test_icon
    else if(argc == 4)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
}

int age_thread()
{
    while(true)
    {
        system("python /home/wj/Qt/Qt_face/SSR-Net/demo/qt_face_real_seetaface.py ");

    }

}


int main(int argc,char *argv[])
{

    std::thread t1(age_thread);
    t1.detach();
    face_thread(argc,argv);


}
