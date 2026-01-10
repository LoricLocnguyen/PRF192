#include <stdio.h>
 int main(){
 	int a , b ;
 	printf("Nhap a :  ");
 	scanf("%d",&a);
 	
 	printf("Nhap b : ");
 	scanf("%d",&b);
 	
 	if(a%b==0){
 		printf("A CHIA HET CHO B");
 		
	 }else{
	 	printf("A KHÔNG HET CHO B ");
	 }
	 return 0;
 }