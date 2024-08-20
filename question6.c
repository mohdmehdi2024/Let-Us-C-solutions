#include <stdio.h>
#include <math.h>

int main(){

	float temp, velocity, wcf;
	scanf("%f%f", &temp, &velocity);

	wcf = 35.74 + (0.6215*temp) + (0.4275*temp - 35.75) * pow(velocity, 0.16); // some problem in this formula
	printf("W.C.F. = %d", wcf);

	return 0;
}
