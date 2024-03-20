#include<stdio.h>
int main(){



	int a=5,b=7;
	double c;
	printf("%d / %d = %d\n", b,a, b/a);
	printf("%d / %d = %.2f\n", b, a, (double)b/a);
	printf("%d / %d = %.2f\n", b, a, b/(double)a);
	printf("%d / %d = %.2f\n", b, a, (double)(b/a));
	return 0;
	
	}