#include<stdio.h>
int main(){
	int a , b , c ;
	int max ;
	printf("Nhap thu tu cac so a - b -c : ");
	scanf("%d %d %d",&a,&b,&c);
	max = a ;
	if(b>max && c<max){
		max = b ; 
	}else if(c>max && c>a) {
		max = c ;
	}
	
	printf("So lon nhat la %d\n",max);
}