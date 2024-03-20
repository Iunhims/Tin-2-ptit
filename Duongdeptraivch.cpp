#include<stdio.h>
#include<math.h>

int gcd(int a,int b){
	if(a==0 || b==0){
	
	return a+b;
	}
	while(a!=b){
		if(a > b){
			a = a-b;
		}
		else b = b-a;
	}
	return a;
	
}
int gcd2(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
	   
	
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",gcd2(a,b));
	}
}