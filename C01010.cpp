#include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d", &a);
	printf ("%d %d %d", a/365, (a%365)/7, ((a%365)%7));
}
