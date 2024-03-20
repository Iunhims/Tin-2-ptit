#include<stdio.h>
#define MAX 100
void taofile(){
	FILE*f=fopen("mang1ctangdan.txt", "w");
	fprintf(f, "%d\n", 5);
	fprintf(f, "%d %d %d %d %d", 1,3,5,7,9);
	fclose(f);
	
}
void docfile(int a[], int &n){
	FILE*f=fopen("mang1ctangdan.txt", "r");
	fscanf(f,"%d", &n);
	int i;
	for(i=0; i<n; i++){
		fscanf(f,"%d", &a[i]);
	}
	fclose(f);
}
void hienmh(int a[], int n){
	int i;
	for(i=0; i<n;i++){
		printf(" %d", a[i]);
	}
}
void hoanvi(int &x, int &y){
	int tg=x; x=y;y=tg;
}

void sapxep(int a[], int &n){
	int i,j;
	for(i=0; i<n-1;i++){
		for (j=i+1; j<n;j++){
			if(a[i]> a[j])
			hoanvi(a[i], a[j]);
}
}
}
void chenx (int a[], int &n){

       	int i,x;
       	
	scanf("%d", &x);
	for (i =n ; i > 0 && a[i-1]>x ; i--){
		a[i]= a[i-1];
	}
	a[i]= x;
	n++;
}
int main(){
	int n,a[MAX];
	taofile();
	docfile(a,n);
	hienmh(a,n);
	sapxep(a,n);printf("\n");
	chenx(a,n); hienmh(a,n);
	return 0;
	          
}