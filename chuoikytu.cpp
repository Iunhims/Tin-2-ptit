#include<stdio.h>

int main(){
	char tentruong [200];
	FILE*f=fopen("Kytu.txt","w");
	//fprintf(f,"%d",1234);
	fputs("Hoc Vien Buu Chinh\n",f);
	fclose(f);
	
	FILE*fo=fopen("Kytu.txt", "r");
//	fscanf(f,"%d\n", &n);
	fgets(tentruong ,200,fo);
	
	fclose(fo);
	  printf("%s",tentruong);
	
	
	int count =0;
	while(tentruong[count]!='\0'){
		count++;
	}	
	printf("So ky tu la: %d\n", count);
	
	int temp =0,i;
	for(i=0;i<count;i++){
		if(tentruong[i]!= ' ' && tentruong [i+1]==' '|| tentruong [i+1]=='\0')
		temp++;
	}
	printf("%d\n", temp);
	
	
	
	for (i=0;i<count;i++){
		if(tentruong[i]>=65&&tentruong [i]<=90){
			tentruong [i] = tentruong [i]+32;
		} printf("%s\n",tentruong );
		
	}
	for(i=0;i<count;i++){
		if(tentruong [i]>=97&&tentruong [i]<=122){
		tentruong [i] = tentruong [i]-32;
		}
	}
	printf("%s\n", tentruong );
	
	return 0;
	
}