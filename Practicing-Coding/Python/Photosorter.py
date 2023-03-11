import os
import shutil
import cv2
import dlib
name ="our"
# Scan the directory containing the photos
photo_dir = "E:\OLD\VATSAL 10022020\Photo 1.jpg"
photos = os.listdir(photo_dir)

# Load the dlib face detector
detector = dlib.get_frontal_face_detector()

# Sort the photos by the names of the people in the photos
sorted_photos = {}
for photo in photos:
  # Load the photo
  img = cv2.imread(os.path.join(photo_dir, photo))

  # Convert the image to grayscale
  gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

  # Detect faces in the image
  faces = detector(gray, 1)

  # If a face was detected, add the photo to the appropriate category
  if len(faces) > 0:
    face = faces[0]
    
    sorted_photos[name] = photo
  else:
    sorted_photos['unknown'] = photo

# Create the output directories
output_dir = 'E:\OLD\VATSAL 100220200'
os.makedirs(output_dir, exist_ok=True)
for name in sorted_photos:
  name_dir = os.path.join(output_dir, name)
  os.makedirs(name_dir, exist_ok=True)

# Move the photos
for name in sorted_photos:
  photo = sorted_photos[name]
  src = os.path.join(photo_dir, photo)
  dst = os.path.join(output_dir, name, photo)
  shutil.move(src, dst)