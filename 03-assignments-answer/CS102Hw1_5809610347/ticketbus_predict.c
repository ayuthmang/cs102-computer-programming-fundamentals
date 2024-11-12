#include<stdio.h>
/*
	STUDENT NAME: AYUTH MANGMESAP
	STUDENT NUMBER: 5809610347
*/
int main()
{ //12345
	int input,proc;
	printf("Please enter your ticket number <xxxxx>:");
	scanf("%d",&input);
	/*
	input: 12345
	//proc = (input/10000); == 1
	//proc = (input/1000 %10); == 2
	//proc = (input/100 %100%10); == 3
	//proc = (input/10 %1000%100%10); == 4
	//proc = (input%10);  == 5
	*/
	proc = (input/10000) + (input/1000 %10) + (input/100 %100%10) + (input/10 %1000%100%10) + (input%10);
	//	proc = 21 ;
	proc =  (proc/10) + (proc%10); 
	proc =  (proc/10) + (proc%10);//FINALLY 
	printf("Your number is:%d\n",proc);
	
	switch(proc)
	{
		case 0: printf("Bad luck"); break;
		case 1: printf("Good luck :)"); break;
		case 2: printf("Will meet your soul-mate soon ^__^"); break;
		case 3: printf("Should make merit"); break;
		case 4: printf("Lucky in love"); break;
		case 5: printf("Need more rest"); break;
		case 6: printf("Beware of an accident @_@"); break;
		case 7: printf("Lucky in game"); break;
		case 8: printf("Looking good"); break;
		case 9: printf("Will get some money soon."); break;
			
	}
	
	return 0;
}
