#include<stdio.h>;
int main(){
	int  n ;
	float i=1;
	float  i1;
	float s=0;
	printf("Nhap n : ");
	while(scanf("%d",&n)!=1||n<0){
		printf("Nhap lai di : ");
		while(getchar()!='\n');
	}
	while(i<=n){
		i1=1/i;
		s=s+i1;
		i++;
	}
	printf("Tong cua s la : %.1f ",s);
	return 0 ;
}