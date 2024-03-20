#include<stdio.h>
int main(){
	int a[]={1,2,3,4};
	printf("\n%x", &a);
	int i;
	for(i =0;i<sizeof(a)/sizeof(int);i++){
		printf("\n%d %d" ,i,&a[i]);
	}
}