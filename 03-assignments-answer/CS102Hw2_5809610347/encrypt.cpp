#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>


	// STUDENT NAME: AYUTH MANGMESAP
	// STUDENT NUMBER: 5809610347


char shiftByN(char org, int n);



int main()
{
	int shift;
	int i;
	char chr[1000000];
	do
	{
		printf("Enter shift amount (1-25): ");
 		scanf("%d" , &shift);
	} while(!(shift >= 1 && shift <= 25));
	
	
	printf("Enter message: ");
	scanf("%c%[^\n]s",chr, chr);
	//scanf("%[^\n]s", str);
	printf("Encrypted message: ");


	for(i = 0 ; i < strlen(chr) ; i=i+1)
	{
		if(chr[i] == '@' )
		{
			break;
		}
		else
		{
			printf("%c",shiftByN(chr[i],shift));	
		}
		
	}
	
	
	return 0 ;
}

char shiftByN(char org, int n)
{
	int gern, sead;
	if((int)org >= 65 && (int)org <= 90 || (int)org >=97 && (int)org <= 122)
	{
		// hai org = a(97)
		// 97+23 > 90
		// 97+ 23
		if ((int)org + n > 90  && isupper(org)) // UPPER CASE
		{ 
			gern = (org + n) - 90;
			org = 64 + gern;
			return org; 
		}
		else if ((int)org + n > 122 )
		{
			gern = (org + n) - 122;
			org = 96 + gern;
			return org; 
		}
		else
		{
			return (char)(org + n);
		}
		
	}
	else  return org;
	
}
