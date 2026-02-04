#include<stdio.h>
int main(){
	char kieukitu;
	printf("Nhap kieu ki tu ma ban thich ");
	scanf("%c",&kieukitu);
	
	if(kieukitu >='A' && kieukitu <='Z') {
		printf("Chu cai viet hoa ");
	}else if(kieukitu >='a'&& kieukitu <='z'){
		printf("Chu viet thuong ");
	}else if(kieukitu >='0'&& kieukitu <='9'){
		printf("Chu so ");
		
	}else{
		printf("Ky tu dac biet ");
	}
}