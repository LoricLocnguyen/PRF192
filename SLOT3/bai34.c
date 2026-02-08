#include<stdio.h>
int main(){
	float  R,S,V,pi;
	printf("Nhap ban kinh ngau nhien : ");
	while(scanf("%f",&R)!=1||R<0){
		printf("Nhap lai di ");
		while(getchar() !='\n');
	}
	pi = 3.141593;
	S=4*pi*R*R;
	V=(4.0f/3.0f)*pi*R*R*R;
	
	printf("Dien tich cua mat cau : %f\n ",S);
	printf("The tich cua mat cau : %f\n ",V);
}