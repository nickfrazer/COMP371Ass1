#include <vector>
#include <stdio.h>
#include <string>
#include <cstring>
#include <glm.hpp>

//Load Img with CImg
#include "CImg_Loader.hpp"


using namespace cimg_library;
// .CImg Loader from http://cimg.eu/


#pragma warning(disable:4996)


bool loadImg(const char * path, std::vector<GLfloat> & out_vertices, std::vector<GLuint> & out_indices)
{
	printf("Loading Img file %s...\n", path);

	/*
	std::vector<unsigned int> vertexIndices;
	std::vector<glm::vec3> temp_vertices;
	*/
	FILE * file = fopen(path, "r");

	if (file == NULL) {
		printf("Impossible to open the file ! Are you in the right path ?\n");
		getchar();
		return false;
	}
	else
	{ 
		while (1) {
			//CImg<unsigned char>& load_jpeg("YukonSatelliteImage.jpg");
			//const CImg<float> image("YukonSatelliteImage");
			CImg<unsigned char> image("YukonSatelliteImage.jpg"); //load image
			//image.blur(2.5);

			//show image
			//CImgDisplay main_disp(image, "Original");

			//main_disp.wait();
		

			/*
			char lineHeader[128];
			// read the first word of the line
			int res = fscanf(file, "%s", lineHeader);
			if (res == EOF)
				break; // EOF = End Of File. Quit the loop.

			if (strcmp(lineHeader, "v") == 0) {
				glm::vec3 vertex;
				fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
				out_vertices.push_back(vertex.x);
				out_vertices.push_back(vertex.y);
				out_vertices.push_back(vertex.z);
			}
			else if (strcmp(lineHeader, "f") == 0) {
				unsigned int vertexIndex[3], uvIndex[3];

				int matches = fscanf(file, "%d %d %d\n", &vertexIndex[0], &vertexIndex[1], &vertexIndex[2]);

				if (matches != 3) {
					printf("File can't be read by our simple parser :-( Try exporting with other options\n");
					return false;
				}
				out_indices.push_back(vertexIndex[0] - 1);
				out_indices.push_back(vertexIndex[1] - 1);
				out_indices.push_back(vertexIndex[2] - 1);
			}
			else {
				// Probably a comment, eat up the rest of the line
				char stupidBuffer[1000];
				fgets(stupidBuffer, 1000, file);
			}
			*/

		}
	}
	/*
	// For each vertex of each triangle
	for( unsigned int i=0; i<vertexIndices.size(); i++ ){

	// Get the indices of its attributes
	unsigned int vertexIndex = vertexIndices[i];

	// Get the attributes thanks to the index
	glm::vec3 vertex = temp_vertices[ vertexIndex-1 ]; //get the correct vertex

	// Put the vertex in the std::vector
	out_vertices.push_back(vertex.x);
	out_vertices.push_back(vertex.y);
	out_vertices.push_back(vertex.z);

	}
	*/
	return true;
}
