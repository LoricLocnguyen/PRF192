#include<stdio.h>
int main(){
	// Kiểm tra số chẵn hoặc số lẻ 
	// input : gọi n số để kiểm tra số lẻ hay chẵn 
	// CPU : SAU KHI NHẬP XONG THÌ KIỂM TRA CHƯƠNG TRÌNH THỬ PHẢI SỐ CHẴN HAY LẺ , DK CHIA 2 =0 LÀ SỐ CHẴN HOẶC CHIA 2 KO BẰNG 0 LÀ SỐ LẺ 
	// OUTPUT : IN KẾT QUẢ 
	int n ; 
	printf("Nhap n de kiem tra : ");
	scanf("%d",&n);
	if(n%2==0){
		printf("Do la so chan ");
	} else {
		printf("Do la so le ");
	}
	return 0 ;
}