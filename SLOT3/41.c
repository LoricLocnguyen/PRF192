#include<stdio.h>
int main(){
	int a,b,c,temp;
	printf("Nhap a ");
	while(scanf("%d",&a)!=1||a>1000||a<(-100)){
		printf("Nhap lai ");
	while(getchar()!='\n');
	
	}
		printf("Nhap b ");
	while(scanf("%d",&b)!=1||b>1000||b<(-100)){
		printf("Nhap lai ");
	while(getchar()!='\n');
    }
    	printf("Nhap c ");
	while(scanf("%d",&c)!=1||c>1000||c<(-100)){
		printf("Nhap lai ");
	while(getchar()!='\n');
}
if(a>b){
temp = a;
	a=b;
	b=temp;
	
}
if(a>c){
temp = a;
	a=c;
	c=temp;

}
if(b>c){
	temp = b;
	b=c;
	c=temp;
}
printf("Ba so theo thu tu tang dan la: %d %d %d", a, b, c);
return 0 ;
}