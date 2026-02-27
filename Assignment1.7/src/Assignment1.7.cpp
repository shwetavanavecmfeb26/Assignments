//============================================================================
// Name        : 7.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius){
	return PI*(radius*radius);
}

float circlePerimeter(float radius){
         return 2*PI*radius;
}
int main() {
	float radius = 7.0;
	float area = circleArea(radius);
	float perimeter=circlePerimeter(radius);

	cout<<"Area of circle: "<<fixed<<setprecision(4)<<area<<endl;
	cout<<"Perimeter of circle: "<<fixed<<setprecision(4)<<perimeter<<endl;
	return 0;
}
