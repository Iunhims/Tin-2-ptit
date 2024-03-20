#include<stdio.h>
#include<string.h>
int main(){
	char s[200];
	gets(s);
	
	int l;
	l=strlen(s);
	printf("\n%d",l);
	strlwr(s);
	printf("\n%s", s);
	strupr(s);
	printf("\n%s", s);
	
	
}