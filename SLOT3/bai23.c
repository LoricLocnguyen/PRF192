#include<stdio.h>
int main(){
	int year;
	printf("Nh?p nam : ");
	scanf("%d",&year);
	if(year%400==0){
		printf("Nam nhuan");
	}else if(year%100!=0){
		printf("Nam nhuan");
	}else{
		printf("Nam khong thuan")
	}
}