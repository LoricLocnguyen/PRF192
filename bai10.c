#include<stdio.h>
int main(){
	int a , b ; 
	float ketqua ; 
	char pheptinh ; 
	// trước hết là nhập phép tính 
	do{
	printf("Nhap phep tinh ma ban muon (+,-,*,/) :  ");
	scanf(" %c", &pheptinh);
	
	if(pheptinh != '+' && pheptinh != '-' && pheptinh != '*' && pheptinh != '/') {
		printf("Phep tinh khong hop le! Nhap lai .\n");
	}
} while(pheptinh != '+' && pheptinh != '-' && pheptinh != '*' && pheptinh != '/' );

// nhập a , b 
   
 
  printf("Nhap so a ban muon : ");
   scanf("%d",&a);
   
 do {
   printf("Nhap so b ma ban  muon : ");
   scanf("%d",&b);
   if(pheptinh == "/" && b==0){
   	printf("khong duoc chia cho 0!.  Nhap lai.\n");
   }
   } while (pheptinh =='/' && b == 0 );
	// phep tinh
	 if (pheptinh=='+'){
	 	ketqua=a+b;
	 	
	 }else if (pheptinh == '-'){
	 	ketqua=a-b;
	 }else if (pheptinh == '*'){
	 	ketqua=a*b;
	 }else if (pheptinh=='/'){
	 	ketqua=(float)a/b;
	 }
	 printf("Ket qua : %2f\n", ketqua);

}