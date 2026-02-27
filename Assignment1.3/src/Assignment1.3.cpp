//============================================================================
// Name        : 3.cpp
// Author      : shwet
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

//function declaration
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
	float c;
	float f;

	printf("celsius:  \n");
	scanf("%f",&c);
	printf("fahrenheit:  \n");
	scanf("%f",&f);

	float  fah=celsiusToFahrenheit(c);
	float  cel=fahrenheitToCelsius(f);

	printf("\n conversion of celsius To Fahrenheit: %.2f\n", fah);
	printf("conversion of fahrenheitToCelsius  : %.2f\n", cel);

	return 0;
}
//functions defination
  float celsiusToFahrenheit(float c){
	 float f = (c*(9/5)+32);
	 return f;
 }
  float fahrenheitToCelsius(float f){
	  float c = (f-32)*(5/9);
	  return c;

  }
