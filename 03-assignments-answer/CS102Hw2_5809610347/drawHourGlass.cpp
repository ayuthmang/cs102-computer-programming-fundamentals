#include<stdio.h>
	// STUDENT NAME: AYUTH MANGMESAP
	// STUDENT NUMBER: 5809610347
void drawHourGlass(int);
int isEven(int);
int main()
{
	
	int n;

	while(n < 3 || n > 20)
	{
		printf("Enter the number of row for the bottle [3-20]:");
		scanf("%d",&n);
	}
	drawHourGlass(n);
	
	return 0;
	
}

printMul(int n)
{
	for(int x = 1 ; x <= n ; x++)
	{
		printf("*");
	}
	printf("\n");
}

printBlank(int n)
{
	for(int x = 1 ; x <= n ; x++)
	{
		printf("@");
	}
}

ifIsOddNumForPrintBlank(int i)
{
	return i -= 2;
}
void drawHourGlass(int n)
{   int i,j,k;
	int amount_letters = n;
	int amount_spaces = 0;
	if(isEven(n))
	{
		for(i = 1 ; i <= n ; i++)
		{
		
			for(j = 0 ; j < amount_spaces; j++)
			{
				printf(" "); 
			}
			for(k = 0 ; k < amount_letters ; k++)
			{
				printf("*");
			}
			printf("\n");
			if(i == (n/2))
			{
				//printf("");
				amount_spaces = amount_spaces;
				amount_letters += 0;
			}
			else if(i >= (n/2)+1)
			{
				//printf("$");
				amount_spaces -= 1;
				amount_letters +=2;
			}
			
			else
			{
				
				amount_spaces +=1;
				amount_letters -= 2;
			}
			
		}
		
	}
	else
	{
		for(i = 0 ; i < n ; i++)
		{
			for(j = 0 ; j < amount_spaces; j++)
			{
				printf(" ");
			}
			
			for(k = 0; k < amount_letters ; k++)
			{
				//
				printf("*");
			}
			
			if(i < n/2) // 5 < 9/2 
			{
				amount_letters -= 2;
				amount_spaces  += 1;
				
			}
			else
			{
				amount_letters += 2;
				amount_spaces  -= 1;
			}
			printf("\n");
			
		}
	}	
}
	
int isEven(int n)
{
	if(n %2 == 0)
		return true;
	return false;
	
}


/*
	for(i = n ; i >= 1 ; i-=2 )
				{
					
						if(i == 1)
						{
							for(j = 1; j <= n ; j+=2)
							{
								printMul(j);
								
							}
						}
						else
						{
						
								printMul(i);
							
							
								//printf("\n");
								
							
						}
					
					
				}
					//printf("\n");
*/
