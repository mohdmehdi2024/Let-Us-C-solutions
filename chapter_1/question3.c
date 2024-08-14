#include <stdio.h>

int main(){

	float s1, s2, s3, s4, s5, aggr, percent;
	printf("Subject 1: ");
	scanf("%f", &s1);
	printf("Subject 2: ");
	scanf("%f", &s2);
	printf("Subject 3: ");
	scanf("%f", &s3);
	printf("Subject 4: ");
	scanf("%f", &s4);
	printf("Subject 5: ");
	scanf("%f", &s5);
	aggr = s1 + s2 + s3 + s4 + s5;
	percent = (aggr/500) * 100;
	printf("Aggregate = %f, Percent = %f", aggr, percent);
	return 0;
}
