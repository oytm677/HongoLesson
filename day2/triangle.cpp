#include "triangle.hpp"
#include "shape.hpp"

triangle::triangle(int a, int b){
	width = a;
	height = b;
}

float triangle::calculate_area(){
	return float(width*height/2);
}

