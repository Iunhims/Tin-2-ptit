#include<stdio.h>
struct sinhvien{
	int masv;
	char hoten[20];
	float diemtin;
};
int main(){
	sinhvien sv1;
	scanf("%d", &sv1.masv);
	gets(sv1.hoten);
	scanf("%f", &sv1.diemtin);
	printf("%d - %s - %f", sv1.masv,sv1.hoten,sv1.diemtin);
	
}