#include<stdio.h>
int main(){
	long a,b,Tong, Hieu, Tich, Du;
    float Thuong;
	scanf("%ld %ld", &a,&b);
	if(b==0){
		printf("0");
	}else{
		Tong   = a+b;
		Hieu   = a-b;
		Tich   = a*b;
		Thuong = 1.0*a/b;
		Du     = a%b;
		
		
		
	printf("%ld %ld %ld %.2f %ld", Tong, Hieu, Tich, Thuong, Du);
		
	}
}