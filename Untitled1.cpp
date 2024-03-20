#include<stdio.h>

char tentruong[20];
int n;

void taofile(){
	FILE*f=fopen("Kytu.txt","w");
	fprintf(f,"%d",1234);
	fputs("Hoc Vien Cong Nghe\n",f);
	fclose(f);
}
void docfile(int a[],int &n){
	FILE*f=fopen("KYtu.txt", "r");
	fscanf(f,"%d\n", &n);
	fgets(tentruong,20,f);
	fclose(f);
	
}
int main(){
	
	return 0;
	
}