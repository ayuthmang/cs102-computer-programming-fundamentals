#include<stdio.h>
#include<string.h>

	//STUDENT NAME: AYUTH MANGMESAP
	//STUDENT NUMBER: 5809610347

int isEven(int x)
{
	return (x%2==0)?1:0;
}

int isPalindrome(char* str)
{
	int begin , end, i , j;
	int length = strlen(str) -1 ;
	end = length;
	begin = 0;
	int ispalin = length ;
	int count = 0;
	if(isEven(strlen(str)))
	{
		ispalin = length +1;
		for(i = 0 ; i < length+1 ; ++i,++begin,--end)
		{
			//printf("%c == %c\n",str[begin] ,str[end]);
			//
		//printf("length%d begin%d end%d i%d count%d ispalin%d\n",length,begin,end,i,count,ispalin);
			
			if(str[begin] == str[end])
			{
				++count;
				//printf("%c == %c\n",str[begin] ,str[end]);
			}
		}
		//printf("count = %d ispalin = %d\n",count,ispalin);
		if(count == ispalin)
		{
			printf("%s is a palindrome\n",str);
		}
		else
		{
			printf("%s is not a palindrome\n",str);
		}
	}
	else
	{
		for(i = 0 ; i <length+1 ; ++i,++begin,--end)
		{
			//printf("%c == %c\n",str[begin] ,str[end]);
			//printf("length%d begin%d end%d i%d count%d ispalin%d\n",length,begin,end,i,count,ispalin);
		
			if(str[begin] == str[end])
			{
				++count;
				//printf("%c == %c\n",str[begin] ,str[end]);
			}
		}
		//printf("count = %d ispalin = %d\n",count-1,ispalin);
		if((count - 1) == ispalin) //without center point
		{
			printf("%s is a palindrome\n",str);
		}
		else
		{
			printf("%s is not a palindrome\n",str);
		}
	}
}

int main()
{
	//printf("--");
	char str[100000];
	printf("Please enter a word:");
	scanf("%s",str);
	isPalindrome(str);
	char ans;
	while(1)
	{
		printf("Would you like to continue? <y/n>");
		scanf("%c%c",&ans,&ans);
		printf("\n");
		if(ans == 'y')
		{
			printf("Please enter a word:");
			scanf("%s",str);
			isPalindrome(str);
		}
		else
		{	
			break;
		}
	}
	
	return 0;
}
