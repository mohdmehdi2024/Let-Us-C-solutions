#include <stdio.h>
#include <math.h>


int main(){

	float latitude1, latitude2, longitude1, longitude2, distance;
	scanf("%f%f%f%f", &latitude1, &longitude1, &latitude2, &longitude2);

	distance = 3963 * acos((sin(latitude1)*sin(latitude2)) + (cos(latitude1)*cos(latitude2)*cos(longitude2-longitude1)));
	printf("Distance: %f", distance);

	return 0;

}
