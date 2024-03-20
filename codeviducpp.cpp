#include <stdio.h>
#define AGE_MAX 150   // hang so
#define C 'a'         // hang ki tu
#define NICK_NAME "abc" // hang chuoi
int main(){
/*	printf("hang AGE_MAX = %d\n", AGE_MAX);
	printf("hang C =%c\n", C);
	printf("hang NICK_NAME = %s\n", NICK_NAME);
	return 0;
	*/
	
/*	int a,b;
	printf("Nhap 2 so nguyen a va b:" );
	scanf("%d %d", &a,&b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%.2f", 1.0*a/b);
	*/
	
	/*int a=5,b=7;
	double c;
	printf("%d / %d = %d\n", b,a, b/a);
	printf("%d / %d = %.2f\n", b, a, (double)b/a);
	printf("%d / %d = %.2f\n", b, a, b/(double)a);
	printf("%d / %d = %.2f\n", b, a, (double)(b/a));
	*/
/*	int i,k;
	i = 5; k= i++;
	printf("i = %d, k = %d\n", i,k);
	i = 5; k = ++i;
	printf("i = %d, k = %d\n", i,k);
	*/
	
	
/*	int a = 1, b =2;
	if (a++>--b){
		a=a++;
		
	}else{
		b = --b;
	}
	printf("%d", a+b);
	*/
	
/*	int a;
	printf("Nhap so nguyen a =");
	scanf("%d",&a);
	printf("%d\n",a);
	printf("% d\n", a);
*/

 /*  char ch1,ch2,ch3;
   printf("vi du getchar\n");
   ch1 = getchar();
   putchar(ch1);
   printf("\nvi du getche\n");
   ch2 = getche();
   putchar(ch2);
   printf("vi du getch\n");
   ch3=getch();
   putchar(ch3);
   return 0;
	*/
	int x;
/*	FILE*fo=fopen("songuyen.txt", "w");
		fclose(fo);
	*/
	FILE*fi=fopen ("songuyen.txt", "r");
	fscanf(fi, "%d", x);
	printf("%d ", x);
	fclose(fi);
	return 0;
	
	
}

