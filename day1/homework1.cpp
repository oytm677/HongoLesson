#include <stdio.h>
#include <iostream>
using namespace std;

template <typename T> class matrix {	 
	int width,height;
	T *member;		
public:
	matrix(const int a,const int b,T x){
		if(a <=0 || b <= 0) 
			throw " Do you really want to make matrix?";
		width = a;
		height = b;	
		member = new T[a*b];
		for(int i = 0; i < height; i++){
			for(int j = 0; j < width; j++){
				member[i*width + j] = x;
			}
		}
	}

	// ~matrix(){
	// 	delete member;
	// }

	// matrix < T > operator/(matrix &other){
	// 	matrix <T> result(width,height);
	// 	for(int i = 0; i < width; i++){
	// 		for(int j = 0; j < height; j++){
	// 		//result.member[i*height + j]	= member[i*height + j]*other.member[i*height + j];
	// 		}
	// 	}
	// 	return result;
	// }

	matrix < T > operator*(matrix &other){
		if(width != other.height || height != other.width)
			throw " study matrix in class!";

		matrix <T> result(other.width,height,0);

			for(int i = 0; i < height; i++){
				for(int j = 0; j < other.width; j++){
					for(int k = 0; k < width; k++ ){
						result.member[i*other.width + j] += member[i*width + k] * other.member[k*other.width + j];
					}
				}
			}
		return result;
	}

	friend ostream& operator<<(ostream& os, const matrix &myself){   
		//os << "I am" ;
		for(int i = 0; i < myself.height; i++){
			os << endl;
			for(int j = 0; j < myself.width; j++){
				os << "'";
				os << myself.member[i*myself.width + j];
				os << "'";
			}
		}	
		os << endl;
    	return os;  
	} 
	

};

int main(){
	// matrix <int> basic_matrix(2,2);
	// matrix <int> second_matrix(2,2);
	// cout << basic_matrix;
	// second_matrix = basic_matrix * second_matrix;
	try{
		matrix <int> basic_matrix(3,3,1);
		matrix <int> second_matrix(3,3,3);
		matrix <int> third_matrix(3,3,0);
		 cout << basic_matrix;
		 third_matrix = basic_matrix * second_matrix;
		 cout << third_matrix;

		
	}

	catch(const char *s){
        cout << "An exception occurred. ";
        cerr << s << endl;

	}

	return 0;
}
