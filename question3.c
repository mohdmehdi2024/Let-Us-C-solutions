#include <stdio.h>
#include <math.h>

int main(){

	float side1, side2, side3, areaTriangle, semiperim, squareRoot;
	scanf("%f%f%f", &side1, &side2, &side3);

	semiperim = (side1 + side2 + side3)/2;
	areaTriangle = semiperim * (semiperim - side1) * (semiperim - side2) * (semiperim - side3);
	squareRoot = sqrt(areaTriangle);

	printf("Area of Triangle: %f", squareRoot);

	return 0;
}
