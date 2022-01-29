// Name: Joseph Eggers
// CWID: 885939488
// Email: joseph.eggers@csu.fullerton.edu

#include "robot.h"

#include <cmath>
#include <string>

#include "cpputils/graphics/image.h"

using graphics::Color, graphics::Image, std::round, std::string;

Robot::Robot(string filename1, string filename2) {
  this->file1 = filename1;
  this->file2 = filename2;
  this->imageFlip = false;
  this->coordsUpdatedFlag = false;
}

void Robot::SetPosition(int i, int j) {
  this->x = i;
  this->y = j;
  this->coordsUpdatedFlag = true;
}

void Robot::DrawHelperFunc(Image& image, const string& file) {
  // Initilize Images
  Image myRobot;
  // Load Robot and Hide it so it Doesnt display
  myRobot.Load(file);
  myRobot.Hide();
  // ---------- Start of Variable Decleartion -----------
  // Constant Hieghts
  const int imgHeight = image.GetHeight();
  const int imgWidth = image.GetWidth();
  const int height = myRobot.GetHeight();
  const int width = myRobot.GetWidth();
  // Image should be centered at x and y
  // Therefore I have to find the midpoints to know where
  // to start to drawing the image
  int midwidth = (width - 1) / 2;
  int midheight = (height - 1) / 2;
  // ---------- End of Variable Decleartion -----------
  // ------------ Copy Image -----------------------
  for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      // Get color of the Image
      Color roboColor = myRobot.GetColor(i, j);
      // off setting by the middle to draw image
      int xOffSet = x - midwidth + i;
      int yOffSet = y - midheight + j;

      // Getting the image to draw on the location
      // only Draw Image if its range
      if ((xOffSet < imgWidth && xOffSet >= 0) &&
          (yOffSet < imgHeight && yOffSet >= 0)) {
        image.SetColor(xOffSet, yOffSet, roboColor);
      } else {
        continue;
      }
    }
  }
  // -------------- End of Copy Image ----------------
  // Make sure I dont overwrite the orginal roboot
  string savedImage = file;
  // append Image No to write over the orginal Robot
  savedImage.append("image");
  // Flush The Robot Image
  myRobot.Flush();
  // Save Image Location
  image.SaveImageBmp(savedImage);
  // Save file name
  if (file == file1) {
    this->savedImage1 = savedImage;
  } else {
    this->savedImage2 = savedImage;
  }
  // Change the boolean back to false
  this->coordsUpdatedFlag = false;
}

void Robot::Draw(Image& image) {
  if (coordsUpdatedFlag == true) {
    DrawHelperFunc(image, file1);
    DrawHelperFunc(image, file2);
  }
  if (imageFlip == false) {
    image.Load(savedImage1);
    AlternateImage();
  } else {
    image.Load(savedImage2);
    AlternateImage();
  }
}
