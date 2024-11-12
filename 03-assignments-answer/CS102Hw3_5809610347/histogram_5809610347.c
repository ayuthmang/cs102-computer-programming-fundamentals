#include<stdio.h>
#include<string.h>
#define newline printf("\n");
#define p printf
#define s scanf

	//STUDENT NAME: AYUTH MANGMESAP
	//STUDENT ID: 5809610347

#pragma region myVariables
char name[7][10] = {
	"James",
	"Devid",
	"Meredith",
	"April",
	"Nate",
	"Kate",
	"Jackson"};
	
float score[7][10] = {
	{10,8,6,10,16,19,18,20,33,-1},
	{7,6,9,8,14,12,15,14,27,-1},
	{9,4,8,6,10,17,13,16,22,-1},
	{4,10,8,10,20,17,20,18,20,-1},
	{1,10,10,0,20,17,20,23,30,-1},
	{0,8,7,4,11,20,18,15,26,-1},
	{10,10,9,10,20,18,19,19,31,-1}
};
#pragma region myVariables
void print(char c,int num)
{
	int i =0;
	for(i = 0 ; i < num ; i++)
	{
		printf("%c",c);
	}
}


void printHistogram()
{	
	int i , k;
	print('-',46); 
	printf("\n\t\tHISTOGRAM OF THE SCORE\n");
	print('-',46);
	printf("\n");
	for(i = 0; i < 7 ; i++)
	{
		if(strcmp(name[i],"Meredith") == 0)
		{
			printf("%s  |",name[i]);
			
		}
		else
		{
			printf("%s\t  |",name[i]);
		}
			float divisle = score[i][9] / 3.0;
		
		
			print('=',divisle);
			printf("%.2f", score[i][9]);
			printf("\n");
	}
	print('-',46);
	printf("\n");

}


void findMaximum(char name[][10],float sc[][10])
{
	int index = 0;
	float max = sc[0][9];
	int i , j;
	
	for(i = 0; i < 7 ; i++)
	{
		if(sc[i][9] > max)
		{
			index = i;
			max = sc[i][9];
		}
	}
	
	printf("Max: %.2f\t%s",sc[index][9],name[index]); newline
}

void findMinimum(char name[][10],float sc[][10])
{
	
	int index = 0;
	float min = sc[0][9];
	int i , j;
	
	for(i = 0; i < 7 ;i++)
	{
		if(sc[i][9] < min)
		{  
			index = i;
			min = sc[i][9];
		}
	}
	printf("Min: %.2f\t%s",sc[index][9],name[index]); newline
}

void findMean(char name[][10],float sc[][10])
{
	int i;
	int j;
	float sum = 0;
	for(i = 0 ; i < 7 ; i++)
	{
		sum += sc[i][9];
	}
	sum /= 7;
	printf("Mean: %.2f",sum);
}

/*
	keepScore(score[count],10,8,6,10,16,19,18,20,33); ++count;
 	keepScore(score[count],7,6,9,8,14,12,15,14,27);++count;
	keepScore(score[count],9,4,8,6,10,17,13,16,22);++count;
 	keepScore(score[count],4,10,8,10,20,17,20,18,20);++count;
  	keepScore(score[count],1,10,10,0,20,17,20,23,30);++count;
 	keepScore(score[count],0,8,7,4,11,20,18,15,26);++count;
  	keepScore(score[count],10,10,9,10,20,18,19,19,31);
*/
int main()

{
	int i , j;
	int sum;
	
	//Calculate score
	for(i = 0 ; i < 7; i++ , sum = 0)
	{
		for(j = 0 ; j < 9 ; ++j) // 0-8// 0 1 2 3 4 5 6 7 8
		{						 // 9 keep score
			sum += score[i][j];
		}

		score[i][9] = sum/1.6;
		//printf("%.2f,%s\n",score[i][9],name[i]);
	}
	printHistogram();
	findMaximum(name,score);
	findMinimum(name,score);
	findMean(name,score);
	
	return 0;
}
