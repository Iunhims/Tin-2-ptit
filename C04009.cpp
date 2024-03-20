#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	int m[100],nc=0;
	int l[100],lc=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);

	if(a[i]%2==0){
		m[nc++]=a[i];
	}else{
		l[lc++]=a[i];
	}
	}
	for(int i=0;i<nc;i++){
		printf("%d ",m[i]);
	}
		
	printf("\n");
	for(int i=0;i<lc;i++){
		printf("%d ",l[i]);
		
	}
}