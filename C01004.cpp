#include<stdio.h>
   int main(){
   	int t;
   	scanf("%d", &t);
   	while(t--){
   		long long a;
   	double b;
   		scanf("%lld", &a);
   		b = 1/(1.0*(a));
   		printf("%.15lf\n", b);
   		
	   }
	   return 0;
   }