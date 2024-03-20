#include<stdio.h>
#define MAX 100


struct manghaichieu{
	int n;
	int a[MAX][MAX];
};
void taofile(){
	FILE*f=fopen("mang2c.txt", "w");
	fprintf(f, "%d",5);
	fprintf(f, "%d %d %d %d %d",0,1,1,1,1);
	fprintf(f, "%d %d %d %d %d",1,0,1,0,1);
	fprintf(f, "%d %d %d %d %d",1,1,0,1,0);
	fprintf(f, "%d %d %d %d %d",1,0,1,0,1);
	fprintf(f, "%d %d %d %d %d",1,1,0,1,0);
	fclose(f);}
	
	void docfile(manghaichieu &m){
		FILE*f=fopen("mang2c.txt", "r");
		fscanf(f, "%d",&m.n);
		int i,j;
		for(i=1;i<=m.n;i++){
			for(j=1;j<=m.n ; j++){
				fscanf(f,"%d", &m.a[i][j]);
			}
		}
		fclose(f);
	}
	void inmh(manghaichieu &m){
	
	int i,j;
	for(i=1;i<=m.n;i++){
		for(j=1;j<=m.n;j++){
			printf("%d",m.a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	manghaichieu m;

	docfile(m);

}