#include<stdio.h>
 int main(){
 	int n;
 	printf("Nhap gia tri n : ");
 	scanf("%d",&n);
 	int hangdonvi=n%10;
 	int hangchuc=n/10;
 	printf("hang don vi la %d\n",hangdonvi);
 	printf("hang chuc la %d\n ",hangchuc);
 	
 	int tong = hangdonvi+hangchuc;
 	printf("Tong cua hangdonvi va hangchuc la %d ", tong );
 	return 0 ; 
 }