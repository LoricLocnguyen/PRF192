#include<stdio.h>
int main(){
	float luong;
	float thue = 0;
	printf("Nhap luong thang nay ");
	scanf("%f",&luong);
	
	if(luong<=11000000){
		thue = 0;
	}else if(luong<=18000000){
		thue = (luong-11000000)*0.05;
	}else{
		thue = (luong-11000000)*0.1;
	}
	printf("Tien thue thang nay la : %.0f VND ",thue);
	return 0;
}