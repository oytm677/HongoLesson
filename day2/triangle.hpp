#ifndef TRIANGLE_H

#define TRIANGLE_H

#include "shape.hpp"

class triangle : public shape {
	private:
		int width,height;
	public:
		triangle(int, int);

		float calculate_area();
};

#endif
