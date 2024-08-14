#include <stdio.h>

int main(){

	int a0, l0=1189, b0=841, a1, b1, l1, a2, l2, b2, a3, l3, b3;
	/*
	A1
	*/
	l1 = b0;
	b1 = l0/2;
	/*
	A2
	*/
	l2 = b1;
	b2 = l1/2;
	/*
	A3
	*/
	l3 = b2;
	b3 = l2/2;

	/* and so on... complete yourself. */
	printf("A1 = %d x %d\n", l1, b1);
	printf("A2 = %d x %d\n", b2, l2);
	printf("A3 = %d x %d", b3, l3);

	return 0;
}
