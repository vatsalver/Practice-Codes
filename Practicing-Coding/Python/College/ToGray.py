import cv2
import numpy as np
def grayscale(img):
    height,width=img.shape[:2]
    gray_image=np.zeros((height,width),dtype=np.uint8)
    for i in range(height):
        for j in range(width):
            red=img[i,j,0]
            green=img[i,j,1]
            blue=img[i,j,2]
            gray_value=0.3*red + 0.58*green +0.11*blue
            gray_image[i,j]=gray_value
    return gray_image

def change_color(img):
    height,width=img.shape
    for i in range(height):
        for j in range(width):
            img[i,j]=255-img[i,j]
    return img
img=cv2.imread("E:\Documents\GitHub\Practice-Codes\Practicing-Coding\Python\College\Fruits.jpeg")
gray_image=grayscale(img)
cv2.imshow("Window",gray_image)
cv2.waitKey(0)
negative_image=change_color(gray_image)
cv2.imshow("Window",negative_image)
cv2.waitKey(0)

