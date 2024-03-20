#include<stdio.h>
#define MAX 100
void taofile(){
	FILE*f=fopen("mang1c.txt","w");
	fprintf(f,"%d\n", 5);
	fprintf(f, "%d %d %d %d %d", 8,6,9,3,7);
	fclose(f);
}
void docfile(int a[], int &n){
	FILE*f=fopen("mang1c.txt", "r");
	fscanf(f,"%d", &n);
	int i;
	for(i=0; i<n; i++){
		fscanf(f,"%d", &a[i]);
		
	}
	fclose(f);
}
void hienmh(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d", a[i]);
	}
}
int  timmin(int a[], int &n){
	int i,min;
	min = 0;
	for(i=1;i<n;i++){
		if(a[i]<a[min])
		min=1;
	}
	return a[min];
}
void hoanvi(int &x, int &y){
	int tg=x; x=y; y=tg;
}
void sxchon(int a[], int &n){
	int i,min,j;
	for(i=0;i<n-1;i++){
		min =i;
		for(j=i+1;j<n;j++)
		if(a[j]<a[min])
		min=j;
		hoanvi(a[i],a[min]);
	}
}
//chen x
void chenx(int a[],int &n){
	int x,k,i;
	scanf("%d %d", &x, &k);
	for(i=n;i>=k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
	
}

void xoax(int a[], int &n){
	int i,k;
	scanf("%d", &k);
	for (i=k;i<n;i++){
		a[i]=a[i+1];
		
	}
	n--;
}
int main(){
	int n,a[MAX];
	taofile();
	docfile(a,n);
	hienmh(a,n);
	printf("\n%d\n", timmin(a,n));
	sxchon(a,n);hienmh(a,n);printf("\n");
	//chenx(a,n);hienmh(a,n);
	xoax(a,n); hienmh(a,n);
	return 0;
}