#include <stdio.h>

#include <stdlib.h>

void NhapMang(int n, int *a)
{
for(int i=0;i<n;i++){
	printf("a[%d]=",i); scanf("%d",a+i);
}

}

void HienMang(int n, int *a)
{

for(int i=0;i<n;i++)

{

printf("%d\t",*(a+i));
}
}

int main()

{
int n;

int *a;

printf("n=");

scanf("%d",&n);

a=(int*)realloc(NULL, n*sizeof(int));

NhapMang (n,a);

HienMang (n,a);

free(a);
return 0;

}