#include<stdio.h>
#include<math.h>
#include<string.h>

	int cp(long a){
		int can = sqrt(a) + 0.5;
		if(can*can ==a){
			return 1;
		}
		return 0;
		
		
		
	}
	

int main(){
	int t;
	scanf("%d", &t);

	
	
	while(t--){

	long a;
	scanf("%ld", &a);
	

	if(cp(a)){
		
			printf("YES\n");
		}
		else printf("NO\n");
	}
	
	

	return 0;
	
}
	