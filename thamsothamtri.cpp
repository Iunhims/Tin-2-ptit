#include<stdio.h>
void thamtri(int num){
	num=num+1;
	
}
void thamchieu(int &num){
	num = num +1;
}
	int main(){
		int x = 100;
		thamtri(x);
		printf("%d\n", x);
		thamchieu(x);
		printf("%d\n", x);
		
		
	}
	

