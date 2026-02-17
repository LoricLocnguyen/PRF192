#include<stdio.h>
int main(){
	int n;
	int s =0;
	int i=1;
	int i1;
	printf("Nhap n : ");
	while(scanf("%d",&n)!=1||n<=0){
		printf("Nhap lai : ");
	while(getchar()!='\n');

	}
	while(i<=n){
		i1=i*i;
		s=s+i1;
		i++;
	}
	printf("Tong cua s la : %d ",s);
	return 0;
}