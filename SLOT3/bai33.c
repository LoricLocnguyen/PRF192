#include<stdio.h>
int main(){
	int n,i;
	long long s =0;
	i=1;
	printf("Nhap n : ");
	while(scanf("%d",&n)!=1||n<0){
		printf("Nhap lai ");
	  while (getchar() != '\n'); // xóa ký tự sai trong buffer

	}
	while(i<=n){
		s=s+i;
		i++;
	}
	printf("Tong cua s la : %lld ",s);  // để không bị tràn dùng kiểu long long , %lld
	return 0;
}