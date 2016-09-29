#ifndef CImgLOADER_H
#define CImgLOADER_H
#define cimg_use_magick
#define cimg_use_jpeg
#include "CImg/CImg.h"
#include "CImg/CImg.h"
#include <vector>
#include <glew.h>



bool loadImg(
	const char * path,
	std::vector<GLfloat> & out_vertices,
	std::vector<GLuint> & out_indices
);

#endif