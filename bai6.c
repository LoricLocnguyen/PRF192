#include<stdio.h>
int main(){
	// TÌM SỐ DƯ  CỦA PHÉP CHIA 
/*	int a , b ;  
	printf(" Nhap a : ");
	scanf("%d",&a);
	
	printf("Nhap b : ");
	scanf("%d",&b);
	
	int ketqua  = a % b;
    printf("so du la %d", ketqua); */
    
    
    // Về mặt thì đúng nhưng vẫn chưa đúng , khi  người dùng nhập b = 0 thì chương trình bị crark
    int a , b ;
    printf(" Nhap a : ");
        scanf("%d",&a);
    printf("Nhap b : ");
    scanf("%d",&b);
    
    if(b==0) {
    	printf("Khong the chia cho 0 ");
    
	}else {
	   int ketqua = a%b;
		printf("so du la  %d",ketqua);
		return 0 ;
		
	}
}