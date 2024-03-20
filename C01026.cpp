#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;scanf("%d",&a);
		if(a < 2){
				printf("NO");
				}
		for(int i=2;i<=sqrt(a);i++)	{
			if(a%i==0){
				printf("NO");
			}else printf("YES");
		}	
				
				
		
		
	}
}