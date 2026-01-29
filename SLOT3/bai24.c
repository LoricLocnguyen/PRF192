#include<stdio.h>
int main(){
	int year;
	printf("Nhap nam : ");
	scanf("%d",&year);
	
	if(year<1000||year>9999){
		printf("Nam phai co 4 chu so ");
	}else{
		if(year%400==0){
			printf("Nam nhuan");
		}
		else if (year%4==0 && year % 100 != 0 ){
			printf("Nam nhuan ");
		}else{
			printf("Nam khong nhuan ");
		}
	}
	
}