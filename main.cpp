#include <iostream>
#include "funcs.h"
#include "imageio.h"

int main(){

  std::cout << "All images read the image found in inImage.pgm \n"; 
  invert("inImage.pgm");
  invert_half("inImage.pgm");
  box_image("inImage.pgm");
  line_image("inImage.pgm");
  twice_image("inImage.pgm");
  pixel_image("inImage.pgm");

  return 0;
}