#include<stdio.h>
#include<math.h>
 int main(){
 	float a,b,c,delta;
 	
 	scanf("%f %f %f", &a, &b, &c);
 
     delta = b*b -4*a*c;
     
     if ( a != 0){
     	if (delta < 0){
     		printf("NO");
		 } if (delta == 0){
		 	printf ("%.2f", -b/(2*a));
		 } if ( delta > 0){
		 	printf("%.2f %.2f", (-b+ sqrt(delta ))/(2 *a),(-b- sqrt(delta ))/(2 *a) );
		 }
		 
	 }else {
	 	if ( b==0 ){
	 		if(c==0 || c != 0){
	 			printf("NO\n");
			 }
		 }else 
		 printf("%.2f", -c/b);
	 }
 
 }