#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a,b,c : ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<=0 || b<=0 || c<=0 ){  // một trong những điều kiện nếu dính điều kiện nào thì ko thể tạo thành tam giác 
        printf("khong the tao thanh tam giac , vui long nhap lai!");
        return 0 ;
	}
	// Điều kiện tam giác 
	else if(a+b>c && b+c>a && a+c>b){
		printf("Tao thanh 1 tam giac ");
	}else{
		printf("Khong the tao thanh 1 tam giac ");
	}
	return 0;
}