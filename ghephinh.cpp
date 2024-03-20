#include<stdio.h>
#include<math.h>
	  
int main (){
long a,b,c,d,e,f;
	scanf ("%ld %ld\n", &a, &b);
	scanf ("%ld %ld\n", &c, &d);
	scanf ("%ld %ld", &e, &f);
	  

long Tong;
Tong= a *b + c *d + e * f;

int can = sqrt(Tong) + 0.5;




     if(can*can==Tong){
 	printf("YES");
} 
 
  else 
 printf("NO");
 
	

	  
}	
	  //printf("%d", Tong);
	  
	  
	
	  
	  
	
	
	
