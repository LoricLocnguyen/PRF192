#include<stdio.h>
int main(){
	int n ;
	int sum = 0;
	printf("Nhap n ");
	scanf("%d",&n);
     while (getchar() != '\n'); // xóa ký tự sai trong buffer
	while(n!=0){
		if(n>0){
			sum = sum + n;
		}
		printf("Nhap tiep ");
		scanf("%d",&n);
	}
	 printf("Tong cac so nguyen duong la: %d", sum);
    return 0;
}