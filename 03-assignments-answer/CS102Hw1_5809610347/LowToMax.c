#include<stdio.h>
	//STUDENT NAME: AYUTH MANGMESAP
	//STUDENT NUMBER: 5809610347

int main()

{
	int num1,num2,num3;
	int min,max,balance;
	printf("Enter 3 integers:");
	
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1 >= num2 && num1 >= num3)
		max = num1;
	if(num2 >= num1 && num2 >= num3)
		max = num2;
	if(num3 >= num1 && num3 >= num2)
		max = num3;	
	
	if(num1 <= num2 && num1 <=num3)
		min = num1;
	if(num2 <=num1 && num2 <=num3)
		min = num2;
	if(num3 <=num1 && num3 <= num2)
		min = num3;
	//  1        
	if(num1 <= num2 && num1 >= num3 || num1 >= num2 && num1 <=num3)
		balance = num1;
	if(num2 <= num1 && num2 >= num3 || num2 >= num1 && num2 <=num3)
		balance = num2;
	if(num3 <= num1 && num3 >= num2 || num3 >= num1 && num3 <=num2)
		balance = num3;
	printf("%d <= %d <= %d",min,balance , max)	;	
	
	
	
	return 0;
}
