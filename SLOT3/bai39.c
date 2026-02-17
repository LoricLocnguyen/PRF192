#include<stdio.h>
int main(){
	int n;
	int i=1;
	float i1;
	float s=0;
	printf("Nhap n : ");
	while(scanf("%d",&n)!=1||n<0){
		printf("Nhap lai :");
	while(getchar()!='\n');
	}
	while(i<=n){
	float i1=(float)1/(2*i);
	s=s+i1;   
	i++;
}
printf("Tong s la : %0.2f ",s);
return 0 ;
}