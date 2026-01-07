#include <stdio.h>
int main(){
	// witdth
	int num1 = 10;
	int num2 = 100;
	int num3 = 1000;
	
	int num4 = 20;
	int num5 = 200;
	int num6 = 2000;
	
	printf("%04d\n",num1);  // thêm số vào chính  giữa %d để căn chỉnh cho đẹp còn thêm 0 trước số 4 kà thêm số 0 
    printf("%04d\n",num2);
    printf("%04d\n",num3);
     
     // hoặc 
    printf("%-4d\n", num4);  // thêm - vào để cân chỉnh vào bên trái còn ở trên là bên phải 
    printf("%-4d\n", num5);
    printf("%-4d\n", num6);
      
      
      
    // hoặc
    float num7= 19.2;
    float num8= 20.2;
    float num9= -129.2;
    
    printf("%+7.2f\n",num7);
    printf("%+7.2f\n",num8);    // thêm số  ( số.f ) để bỏ số sau dấu phẩy , thêm số trước dấu . để cân chỉnh , và thêm + sau dấu % )
    printf("%+7.2f\n",num9);
    return 0;
}