#include "shape.hpp"
#include "triangle.hpp"
#include <iostream>

using namespace std;

int main(){
	triangle seisankakukei(3,4);
	cout << seisankakukei.calculate_area() << endl;
}
