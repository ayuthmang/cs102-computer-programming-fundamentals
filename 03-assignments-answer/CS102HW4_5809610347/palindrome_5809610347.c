#include<stdio.h>
#include<string.h>

    //STUDENT NAME: AYUTH MANGMESAP
    //STUDENT ID: 5809610347
int isPalindrome(char *word,int begin , int end)
{
	if(word[begin] != word[end])
    {
        //printf("begin %d end %d %c != %c\n",begin,end,word[begin],word[end]);
        //printf("else 1\n");
        return 0;
    }
    else if(end == 0)
    {
        //printf("End == 0\n");
        if(word[begin] == word[end])
            return 1;
        else return 0;
    }
    else if(word[begin] == word[end])
    {
        //printf("begin %d end %d %c == %c\n",begin,end,word[begin],word[end]);
        return isPalindrome(word,++begin,--end);
    }
}

int main(){
    char ans;
	char word[25];
    do{
    printf ("Please enter a word: ");
	scanf ("%s", word);
	if (isPalindrome(word,0,(strlen(word) - 1)) )
	printf ("%s is a palindrome.\n", word);
	else printf ("%s is not a palindrome.\n", word);
	printf("Would you like to continue?<y/n>");

	scanf("%c%c",&ans,&ans);
	}while(ans != 'n');
	return 0;
}
