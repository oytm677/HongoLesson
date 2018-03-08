#ifndef SHAPE_H

#define SHAPE_H

class shape {
	private:
		int width,height;	
	public:
		void show_shape();
		virtual float calculate_area() = 0;
};



#endif
