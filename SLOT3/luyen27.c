#include<stdio.h>
int main(){
	int a,b;
	float ketqua;
	int sodu;
	char  pheptinh;
	scanf("%d,%d",&a,&b);
	fflush(stdin);
	scanf(" %c",&pheptinh);
	switch (pheptinh){
	
		case'+':
		ketqua = a + b;
		break;
		
		case'-':
		ketqua = a - b;
		break;
		
		case'*':
		ketqua = a * b;
		break;
		
		case'%':
		if(b==0){
			printf("khong the chia cho 0 ");
			return 0;
		}
		sodu =  a % b;
		printf("%d %c %d = %d ",a,pheptinh,b,ketqua);
		return 0;
		
		case'/':
		if(b==0){
			printf("khong the chia cho 0 ");
			return 0;
		}
		   ketqua=(float)a/b;
		   printf("%d %c %d = %.2f ",a,pheptinh,b,ketqua);
    	}
	      printf("%d %c %d = %.0f",a,pheptinh,b,ketqua);
	
}