#include<stdio.h>
int main(){
	int sobatki ;
	printf("Nhap so bat ki :");
	scanf("%d",&sobatki);
	if(sobatki>0){
		printf("Do la so duong ");
	}else if(sobatki==0){
		printf("So nay la so 0");
	}else{
		printf("Do la so am ");
	}
}