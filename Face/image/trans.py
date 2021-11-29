import os
from PIL import Image

src_path = '/home/wj/Qt_age/Face/image/test'
dst_path = '/home/wj/Qt_age/Face/image/test_icon'
files = os.listdir(src_path)
size = (250,250)
for item in files:
    try:
        src_img = Image.open(os.path.join(src_path, item))
        src_img.thumbnail(size, Image.ANTIALIAS)
        src_img.save(os.path.join(dst_path, item))
    except IOError:
        print(item)
