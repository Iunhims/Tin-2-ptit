#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min_pos =i;
		for(int j =i +1;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		swap(a[i], a[min_pos]);
		printf("Buoc %d: ");
	}
	printf("\n");
	
}
int main(){
	int n;
	scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		SelectionSort(a,n); 
	}