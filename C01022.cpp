#include<stdio.h>
 
 	/*int t;
 	scanf("%d",&t);
 	while(t--){
 		int n;scanf("%d",&n);
 		int sum=0;
 		while(n>0){
 			sum += n%10;
 			n/=10;
 			
		 }
		 printf("%d\n",sum);
	 }
	 
	 */
	 
	 void Tongcacchuso(int n){
	 	int sum =0;
	 	while(n>0){
	 		int t=n%10;
	 		sum+=t;
	 		n/=10;
	 		
		 }
	}
		 return s;
	 int main(){
	 int n;
	 scanf("%d",&n);
	 while(n--){
	 	int t;
	 	scanf("%d",&t);
	 	printf("%d\n",Tongcacchuso(t));
	 }
	 	return 0;
	 }
 