#include<stdio.h>
int main(){
	int a,b ;
	float kq ;
	char pheptoan;
	scanf("%d,%d",&a,&b);
	fflush(stdin);
	scanf("%c",&pheptoan);
	int soDu;
	switch (pheptoan){
	
	 case'+':
	 kq = a +b ;
	 break ;
	 
	 case'-' : 
	 kq = a -b ;
	 break ;
	 
	 case'*' : 
	 kq = a * b ;
	 break;
	 
	 case'%' : 
	 if(b==0)
	 {
	 	printf("Khong the chia cho 0 ");
	 	return 0;
	 }
	 	soDu = a % b;
	 	printf("%d %c %d = %d ",a,pheptoan,b,kq);
	 	return 0;
	 	
	case'/' : 
	if(b==0)
	{
		printf("khong the chia cho 0 ");
		return 0 ;
	}
	    kq = (float)a/b;
	    printf("%d %c %d = %.2f ",a,pheptoan,b,kq);
	    
	}
	printf("%d %c %d = %.0f ",a,pheptoan,b,kq);
}