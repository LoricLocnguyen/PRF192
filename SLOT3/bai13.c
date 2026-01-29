#include<stdio.h>
int main(){
	int age = 25;
	int year = 2025;
	int quanlity = 1;
	float gpa = 2.5;
	float price = 25000.2353;
	float temperature = -10.1;
	double pi = 3.14123918290381;
	double e  = 2.71123128313718;
	char grade ='A';
	char sympol ='!';
	char currency ='$';
	char name[] = "Locnguyen";
	char food[] = "Pizza";
	char email[] = "pinkblack0905@gmail.com"; // dùng được kí tự đặc biệt 
	printf("You are %d year old\n ",age);
	printf("The year is %d\n",year);
	printf("You have ordered %d x Items\n ",quanlity);
	printf("You are %.1f GPA\n ",gpa);
	printf("You buy a book have %.0f VND\n ",price);
    printf("The temperature is %.1f°F\n ",temperature);
    printf("The value of pi is %.15lf\n ",pi);
    printf("The value of e is %.15lf\n ",e);
    printf("You grade is %c\n ",grade);
    printf("The favourite sympol is %c\n",sympol);
    printf("The currency is %c\n ",currency);
    printf("Hello %s\n",name);
    printf("Loc nguyen like eat %s\n",food);
    printf("Email cua toi la %s ",email);
    
    
	     
	
}