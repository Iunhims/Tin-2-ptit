#include<stdio.h>
#define MAX 100

void taofile(){
	FILE*f=fopen("mang2c.txt", "w");
	fprintf(f, "%d",5);
	fprintf(f, "%d %d %d %d %d",0,1,1,1,1);
	fprintf(f, "%d %d %d %d %d",1,0,1,0,1);
	fprintf(f, "%d %d %d %d %d",1,1,0,1,0);
	fprintf(f, "%d %d %d %d %d",1,0,1,0,1);
	fprintf(f, "%d %d %d %d %d",1,1,0,1,0);
	fclose(f);
	
}
void docfile(int a[][MAX],int &n){
	FILE*f=fopen("mang2c.txt", "r");
	fscanf(f, "%d", &n);
	int i,j;
	for(i=1; i<= n;i++){
		for(j=1; j<=n;i++){
			fscanf(f,"%d",&a[i][j]);
		}
	}
	fclose(f);
}
void inmh(int a[][MAX],int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;
	int a[MAX][MAX];
	taofile();
	docfile(a,n);
	inmh(a,n);
	
	return 0;
		}
