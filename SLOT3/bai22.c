#include<stdio.h>
int main(){
	int sodien;
	int tong;
	printf("So dien ma ban da chay thang nay : ");
	scanf("%d",&sodien);
if (sodien <= 50) {
        tong = sodien * 1678;
    } 
    else if (sodien <= 100) {
        tong = sodien * 1734;
    } 
    else {
        tong = sodien * 2014;
    }
	 printf("Tong tien dien la : %d ",tong);
}