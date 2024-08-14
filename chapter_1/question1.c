#include <stdio.h>

int main(){
	float basic_sal=0, da=0.40, hra=0.20, gross_sal=0;
	scanf("%f", &basic_sal);
	gross_sal = basic_sal + (da * basic_sal) + (hra * basic_sal);
	printf("Gross salary of Ramesh is %f", gross_sal);
	return 0;
}
