#include<stdio.h>
#include<math.h>
    //STUDENT NAME: AYUTH MANGMESAP
    //STUDENT NUMBER: 5809610347

int sum;

int isMagic(int size,int square[][size])
{
	int isDuplicate = square[0][0] * pow(size,2); // 1st num * size * size
	int isDuplicate_Count = 0;
    int isTRUTH = 0;
    //calculate row
    int i , j ;
    int sumRow[size],sumColum[size];
    for(i = 0 ; i < size ; i++)
    {
        sumRow[i] = 0;
        for(j = 0 ; j < size ; j++)
        {
            sumRow[i] += square[i][j];

        }
        //printf("sumRow[%d] = %d\n",i,sumRow[i]);
    }
    //check sum of ROW
    for(i = 0 ; i < size ; i++)
    {
	/*1 4 12 11 3
15 13 9 7 2
21 22 23 24 25
6 8 5 9 10
14 16 17 18 19*/
        for(j = i+1 ; j < size ; j++)
        {
            if(sumRow[i] != sumRow[j])
            {
                //printf("sumRow[%d] %d != sumRow[%d] %d\n",i,sumRow[i],j,sumRow[j]);
                return 0;
            }
        }
    }
    /*
    4 9 2
    3 5 7
    8 1 6

    //
    ij ij ij

    00 01 02
    10 11 12
    20 21 22


    */
    //calculate colum
    for(i = 0; i < size ; i++)
    {
        sumColum[i] = 0;
        for(j = 0; j < size ; j++)
        {
            //printf("%d +",square[j][i]);
            sumColum[i] += square[j][i];
        }
        //printf("\n",sumColum[i]);
    }
    //check sum of COLUM
    for(i = 0 ; i < size ; i++)
    {
        for(j = i+1 ; j < size ; j++)
        {
            if(sumColum[i] != sumColum[j])
            {
                //printf("sumColum[%d] %d != sumColum[%d] %d\n",i,sumColum[i],j,sumColum[j]);
                return 0;
            }
        }
    }


    //calculate diagonal
    int sumDiagonal[2] = {0,0};
    for(i = 0; i < size ; i++)
    {
        sumDiagonal[0] += square[i][i];
    }
    for(i = (size -1) ,j =0; i >= 0 ; --i ,++j )
    {
        //printf("%d\n",i);
        sumDiagonal[1] += square[i][j];
    }
    printf("%d %d\n" ,sumDiagonal[0],sumDiagonal[1]);

    //CHECK DIAGONAL
    if(sumDiagonal[0] != sumDiagonal[1])
        return 0;
    //printf("%d %d\n",sumDiagonal[0],sumDiagonal[1]);
    int isDuplicate_Sum = 0;
    
	for(i = 0; i < size ;i++)
    {
    	for(j = 0 ; j < size ; j++)
    	{
    		isDuplicate_Sum += square[i][j];
		}
	}
	//printf("isDuplicate %d isDuplicate_sum %d",isDuplicate,isDuplicate_Sum);
	if(isDuplicate == isDuplicate_Sum) 
		return 0;

    //sum = sumDiagonal[0];
    return 1;
}

int main()
{
    int size;
    char ans;
doNewQuestion:    do{
        printf("Please enter size of square (3-9): ");
        scanf("%d",&size);
        if(!(size >= 3 && size <=9))
            printf("Invalid Input!!\n\n");
        else
        {
            printf("Enter number 1 to %d into your square:",size*size);
            int square[size][size];
            int i , j;
            for(i = 0; i < size; i++)
            {
                for(j = 0 ; j < size ; j++)
                {
                    scanf("%d",&square[i][j]);
                }
            }
            if(isMagic(size,square))
            {
                printf("\nCongratulations!! Your square is a magic square.\n");
                printf("The magic constant of this square is %d\n\n", sum);

            }
            else
                printf("Your square is not a magic square!!\n\n");
        }

    }
    while(!(size >= 3 && size <= 9));
        printf("Try more <y/n>? ");
        scanf("%c%c",&ans,&ans); // white space;
        while(ans == 'Y' || ans == 'y')
        {
            goto doNewQuestion;
        }
    //goto doNewQuestion;







    return 0;
}
