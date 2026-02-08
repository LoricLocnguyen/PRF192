#include<stdio.h>
#include<math.h>
int main(){
    int M ,C,Xm,Ym,Xc,Yc,d,R;
    M =(Xm,Ym);
    C =(Xc,Yc);
    printf("Nhap diem toa do cua M : ");
    while(scanf("%d,%d",&Xm,&Ym)!=2){
    	printf("Nhap lai ");
    	while(getchar()!='\n');
	}
	 printf("Nhap diem toa do cua C : ");
	 while(scanf("%d,%d",&Xc,&Yc)!=2){
	printf("Nhap lai ");
    while(getchar()!='\n');
	 }
	 printf("Nhap ban kinh R : ");
	 while(scanf("%d",&R)!=1||R<0){
	 	printf("Nhap lai ");
	 	while(getchar()!='\n');
	 	
	 }
	 d=sqrt((Xm-Xc)*(Xm-Xc)+(Ym-Yc)*(Ym-Yc));
	if(d<R){
		printf("M nam trong Ban Kinh");
     }else if(d>R){
     	printf("M nam ngoai  Ban Kinh ");
	 }else{
	 	printf("M nam trong ban kinh ");
	 }
	 return 0;
}