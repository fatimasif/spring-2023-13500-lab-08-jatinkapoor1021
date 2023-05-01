#include <iostream>
#include "funcs.h"
#include "imageio.h"

int main(){

  
  invert("inImage.pgm");  // A
  invert_half("inImage.pgm"); // B
  box_image("inImage.pgm"); // C
  line_image("inImage.pgm");  // D
  twice_image("inImage.pgm"); // E
  pixel_image("inImage.pgm"); // F

  return 0;
}