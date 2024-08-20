#include <stdio.h>
#include <math.h>

int main(){

	float r, fi, x , y;
	scanf("%f%f", &x, &y);

	r = sqrt(pow(x,2) + pow(y,2));
	fi = tan(x/y);

	printf("Conversion::\nCartesian Co-ordinates: (%f, %f)\nPolar Co-ordinates: (%f, %f)", x, y, r, fi);

	return 0;
}
