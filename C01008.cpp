#include<stdio.h>
int main(){
	float F, C;
	scanf("%f", &C);
	F = 1.0*(C * 9 / 5) + 32;
	printf("%.2f", F);
	return 0;
}