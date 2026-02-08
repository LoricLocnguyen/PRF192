#include<stdio.h>
#include<math.h>
int main(){
	int A,B,x1,x2,y1,y2,AB;
	A = (x1,y1);
	B = (x2,y2);
	printf("Nhap diem A ");
	while (scanf("%d,%d", &x1, &y1) != 2) {
		printf("Nhap lai di : ");
		while(getchar()!='\n');
	}
       printf("Nhap diem B ");
    while (scanf("%d,%d", &x2, &y2) != 2) {
    	printf("Nhap lai di");
    while(getchar()!='\n');

    }    
    AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Gia tri tuyet doi cua AB la : %d ",AB);
    return  0;
}