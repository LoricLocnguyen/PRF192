#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,H;
	float S,p;
	printf("Nhap a : ");
	while(scanf("%d",&a)!=1||a<0){
		printf("Nhap lai ");
		while(getchar()!='\n');
	}
	printf("Nhap b : ");
	while(scanf("%d",&b)!=1||b<0){
		printf("Nhap lai ");
		while(getchar()!='\n');
	}
	printf("Nhap c : ");
	while(scanf("%d",&c)!=1||c<0){
		printf("Nhap lai ");
		while(getchar()!='\n');
	}
	if(a+b>c&&a+c>b&&b+c>a){  // thoả mãn 3 điều kiện cùng lúc 
       printf("Tam giac ");
       if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
       	printf("Vuong ");
        S = 0.5 * a * b;
	 
	}else if(a==b||a==c||b==c){
		printf("Can ");
		H =sqrt(a*a - (b/2.0)*(b/2.0));
		S = 0.5*b*H;
	 
	}else{
		printf("Thuong");
		 float p =(float)(a+b+c)/2;  // không được làm như này a+b+c/2 máy tính sẽ nghĩ a+b+ ( c/2 ) 
            S = sqrt(p*(p-a)*(p-b)*(p-c));
		}
		        printf("\nTa co dien tich tam giac la : %.2f",S);

	}else{
		printf("Khong phai tam giac ");
	}
	return 0;	
} 