#include<stdio.h>
int main(){
	int tiendien;
	int sodien;
	int tong ; 
	printf("Nhap so dien ma thang qua ban da dung : ");
	scanf("&d",&sodien);
	if(0<sodien<50){
		tong = sodien*1678;
		printf("Tong tien dien la : %d ",tong);
	}else if (51<sodien<100){
		tong = sodien*1734;
		printf("Tong tien dien la ")
	}
}