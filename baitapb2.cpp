#include<stdio.h>
 
 int main(){
 	
 	/*FILE*fo=fopen("phanvanduong.txt", "w");
		fclose(fo);
	*/
	char x[100];

	FILE*fi=fopen ("phanvanduong.txt", "r");
	fgets(x, 100, fi);
	printf(" ", x);
	fclose(fi);
	printf("%s", x);
	return 0;
	
 	
 }