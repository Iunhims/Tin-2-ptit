#include<stdio.h>
int main(){
	long a,b, Hieu, Du, Nguyen;
	long long Tong, Tich;
	float Thuc;
	scanf("%ld %ld", &a,&b);
	
	Tong    = a + b;
	Hieu    = a - b;
	Tich    = a * b;
	Nguyen  = a / b;
	Du      = a % b;
	Thuc    = (1.0 *a)/b;
	
	printf("%lld\n", Tong);
	printf("%ld\n", Hieu);
	printf("%lld\n", Tich);
	printf("%ld\n", Nguyen);
	printf("%ld\n", Du);
	printf("%.2f\n", Thuc);
	return 0;
	
	
	
	
	
	
	
}