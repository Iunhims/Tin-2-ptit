#include<stdio.h>
int main (){
	
	int a,b;
	float c;
	scanf("%d %d", &a,&b);
	// ax + b = 0
	
	if ( a == 0){
		if (b == 0){
			printf("Vo so nghiem");
		 }else {
		 	printf("Vo nghiem");
		 }
		
	} else {
		c = 1.0*-b/a;
		printf("%.2f",c );
		
	}
}