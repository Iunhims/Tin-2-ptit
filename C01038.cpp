#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	int b=a,cuoi=a%10,dau,dem=0;
	while(a >=10){
		++dem;
		a/=10;
		
	}
	dau=a;
	int giua = b -dau*(int)pow(10,dem)-cuoi;
	int res = cuoi*(int)pow(10,dem)+giua+dau;
	printf("%d",res);
	
	
	
}