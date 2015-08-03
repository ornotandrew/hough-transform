#include <iostream>
#include "CImg.h"
using namespace cimg_library;

int main() {
	CImg<unsigned char> *image = new CImg<unsigned char>("test.gif");
	std::cout << image->width() << std::endl;
	return 0;
}
