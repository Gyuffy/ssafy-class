import cv2
import os

img1 = cv2.imread("resized_image.jpg")
img2 = img1[200:400, 200:400]

cv2.imshow("image1", img1)
cv2.imshow("image2", img2)

cv2.waitKey(0)
cv2.destroyAllWindows()
