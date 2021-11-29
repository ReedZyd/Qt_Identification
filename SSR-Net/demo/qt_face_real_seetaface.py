import os
import cv2
import numpy as np
from SSRNET_model import SSR_net,SSR_net_general
import sys
from moviepy.editor import *
from PIL import Image
#import matplotlib.pyplot as plt
import pdb
#import shutil
import tensorflow as tf
import math
from time import sleep
tf.logging.set_verbosity(tf.logging.ERROR)
os.environ["CUDA_VISIBLE_DEVICES"]=" "
def estimate():
    weight_file="/home/wj/Qt/Qt_face/SSR-Net/pre-trained/megaface_asian/ssrnet_3_3_3_64_1.0_1.0/ssrnet_3_3_3_64_1.0_1.0.h5"
    weight_file_gender = "/home/wj/Qt/Qt_face/SSR-Net/pre-trained/wiki_gender_models/ssrnet_3_3_3_64_1.0_1.0/ssrnet_3_3_3_64_1.0_1.0.h5"
    img_size = 64
    stage_num = [3,3,3]
    lambda_local = 1
    lambda_d = 1
    model = SSR_net(img_size,stage_num, lambda_local, lambda_d)()
    model.load_weights(weight_file)
    model_gender = SSR_net_general(img_size,stage_num, lambda_local, lambda_d)()
    model_gender.load_weights(weight_file_gender)
    age=0
    path="/home/wj/Qt/Qt_face/SSR-Net/demo/img_test/"   
    last_filename="1"
    while True:
        with open("/home/wj/Qt/Qt_face/Face_release/img_real/images_list_new.txt","r") as real_images_list:
            filename=real_images_list.readline()
        filename=filename[42:-1]
        if last_filename!=filename:
            picture="/home/wj/Qt/Qt_face/Face_release/img_real_/"+filename
            img=cv2.imread(picture)
            faces = np.empty((1, img_size, img_size, 3))

            faces[0,:,:,:]=img
            predicted_ages =model.predict(faces)
            predicted_genders=model_gender.predict(faces)

            with open(path+'result.txt',"w") as f_result:
            #f_result.write(picture+'\n')
                f_result.write(str(predicted_genders[0][0])+'\n')
                f_result.write(str(predicted_ages[0][0])+'\n')
            os.rename(path+'result.txt',path+'result_new.txt')
            print("predict image: {}".format(picture))
            print("age:",predicted_ages[0][0])
            print("gender:",predicted_genders[0][0])
        else:
            sleep(1)
        last_filename=filename
if __name__ == '__main__':
    estimate()
