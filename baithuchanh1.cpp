#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	//a b c
	
	if( a != b || b != c){
		if ( a < b && a< c){
			printf("%d", a);
		} else if ( b<c && b <a){
			printf("%d", b);
		} else 
		printf("%d", c);
	}
	if( a ==b && b == c){
		printf("%d", a);
	}
	return 0;
}
