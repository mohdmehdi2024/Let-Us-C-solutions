#include <stdio.h>

int main(){

	float tempF=0, c;
	scanf("%f", &tempF);
	c = ((tempF - 32) * 5)/9;
	printf("Temperature in Centigrade: %f", c);

	return 0;
}
