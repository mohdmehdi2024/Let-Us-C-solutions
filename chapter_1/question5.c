#include <stdio.h>

int main(){

	float len=0, breadth=0, area, perim, circumf, radius=0;
	printf("Enter length of rectangle: ");
	scanf("%f", &len);
	printf("Enter breadth of rectangle: ");
	scanf("%f", &breadth);
	printf("Enter radius of circle: ");
	scanf("%f", &radius);

	area = len * breadth;
	perim = 2 * (len + breadth);
	printf("Area of rectangle: %f, Perimeter of rectangle = %f", area, perim);

	circumf = 2 * 3.14 * radius;
	printf("Circumference of Circle: %f", circumf);


	return 0;
}
