// PHÉP TOÁN CƠ BẢN TRONG LẬP TRÌNH C 
#include<stdio.h>
 int main(){
 	// gọi đầu ra : input 
 	// cho gán giá trị a và b là số nguyên để tính phép tính 
 	 int a , b ;
 	 printf("Cho m nhap ngau nhien so a ma m thich : ");
 	 scanf("%d",&a); // &a không được để trong dấu ngoặc đôi  và &b cũng thế 
 	 printf("Cho m nhap so b  ma m thich : ");
 	 scanf("%d",&b);
 	 int ketqua= a+b ;
 	 printf("Ket qua cua dap an la %d",ketqua );
 	 return 0 ; 
 }