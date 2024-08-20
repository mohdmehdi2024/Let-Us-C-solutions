#include <stdio.h>

int main(){

	int input, rem=0, rev=0;
	scanf("%d", &input);

	rem = input%10;
	rev = rev * 10 + rem;
	input = input/10;

	rem = input%10;
	rev = rev * 10 + rem;
	input /= 10;

	rem = input%10;
	rev = rev * 10 + rem;
	input /= 10;

	rem = input%10;
	rev = rev * 10 + rem;
	input /= 10;

	rem = input%10;
	rev = rev * 10 + rem;
	input /= 10;

	printf("Reversed: %d", rev);

	return 0;
}
