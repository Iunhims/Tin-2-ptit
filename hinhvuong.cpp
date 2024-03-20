#include<stdio.h>
#include<stdlib.h>

int main (){
	int a, b,a1,b1;
	int a2, b2, a3,b3;
	int MINa, MINb, MAXa, MAXb, DIENTICH;
	
	scanf("%d %d %d %d", &a, &b, &a1,&b1);
	scanf("%d %d %d %d", &a2, &b2, &a3,&b3);
	  
	  
	  MINa = ( a < a2) ? a : a2;
	  MINb = ( b < b2) ? b : b2;
	  MAXa = ( a1 > c3) ? a1 : c3;
	  MAXb = ( a1 > b3) ? a1 : b3;
	   DIENTICH = ( MAXa - MINa > MAXb - MINb) ? MAXa - MINa : MAXa - MINb;
	   printf("%d\n", DIENTICH*DIENTICH );
	
}