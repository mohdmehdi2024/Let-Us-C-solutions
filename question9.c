#include <stdio.h>

int main(){

	int amount, r100, mr100, r50, mr50, r10, mr10, r5, mr5, r2, mr2, r1, mr1, numberOfNotes;
	scanf("%d", &amount);

	r100 = amount/100;
	mr100 = amount%100;

	r50 = mr100/50;
	mr50 = mr100%50;

	r10 = mr50/10;
	mr10 = mr50%10;

	r5 = mr10/5;
	mr5 = mr10%5;

	r2 = mr5/2;
	mr2 = mr5%2;

	r1 = mr2/1;
	mr1 = mr2%1;

	numberOfNotes = r100 + r50 + r10 + r5 + r2 + r1;
	printf("Smallest number of Notes for %d: %d", amount, numberOfNotes);

	return 0;
}
