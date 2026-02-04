#include<stdio.h>
int main(){
	float luong;
	float thue;
	printf("Nhap luong thang nay ");
	scanf("%f",&luong);
	if(luong<11000000){
		thue=0;
	}else if(luong <= 11000000){
		thue=(luong-1100000)*0.05;
	}else{
		if(luong<=18000000){
			thue = (luong-18000000)*0.1;
		}
	}
	printf("tien thue thang nay la : %.0f",thue);
}