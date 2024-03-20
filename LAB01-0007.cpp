#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	double TBC=0;
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
    	TBC += a[i];
	}
	
	
		
		printf("%.3lf",(double)TBC/4);	
	}

 