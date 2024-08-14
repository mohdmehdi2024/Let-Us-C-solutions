#include <stdio.h>

int main(){

	float distance=0, m, ft, inches, cm;
	printf("Enter distance in kilo meter");
	scanf("%f", &distance);
	m = distance * 1000;
	ft = m * 3;
	inches = ft * 12;
	cm = inches * 2.5;
	printf("The distance between two cities is %f in meter, %f in feet, %f in inches and %f in centimeters.", m, ft, inches, cm);
	return 0;
}
