#include <stdio.h>

int main(){

	int input, sum=0, r, q;
	printf("Enter 5-digit number: ");
	scanf("%d", &input);
	r = input%10;
	q = input/10;
	sum += r;
	r = q%10;
	q = q/10;
	sum += r;
	r = q%10;
	q = q/10;
	sum += r;
	r = q%10;
	q = q/10;
	sum += r;
	r = q%10;
	q = q/10;
	sum += r;

	printf("Sum of digits: %d", sum);

	return 0;
}
