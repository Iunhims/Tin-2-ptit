#include<stdio.h>
int main(){

	int a,b;
	printf("Nhap 2 so nguyen a va b:" );
	scanf("%d %d", &a,&b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%.2f", 1.0*a/b);
	
	return 0;
	
	}