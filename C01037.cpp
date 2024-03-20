#include<stdio.h>
int main(){
	int a,b;scanf("%d %d",&a,&b);
	long long tong =0;
	if(a > b){
		int r =a; 
		a=b;
		b=r;
	}
	for(int i=a;i<=b;i++){
		tong +=i;
	}
	printf("%d",tong);
}