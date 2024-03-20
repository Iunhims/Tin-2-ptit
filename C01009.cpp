#include<stdio.h>
int main(){
	int a, Nam, Tuan, Ngay;
	scanf("%d", &a);
	if( a / 365 ==0){
		Nam = 0;
		Tuan = a/7;
		Ngay = Tuan % 7;
	}
	if ( a / 365 == 1){
		Nam = 1;
		Tuan = (a % 365)/ 7;
		Ngay = (a % 365) % 7;
		
	}
	if ( a / 365 == 2){
		Nam = 2;
		Tuan = (a % 730)/ 7;
		Ngay = (a % 730) % 7;
		
	
		
	
	printf("%d %d %d", Nam, Tuan, Ngay);
} 
}