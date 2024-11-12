#include<stdio.h>
#include<stdlib.h>

#define newline printf("\n");
#define filename "myClassCS007.txt"
#define cL getLineOfFile

	//STUDENT NAME: AYUTH MANGMESAP
	//STUDENT ID: 5809610347

/*
You can not have static array which size is given as a variable
That's why constants should be #defined:
#define a 6
This way preprocessor will replace a with 6, making it valid declaration.
*/
#pragma region myFunctions
struct StudentInfo{
	char ID[11];
	char firstN[16];
	char lastN[16];
	float test[5];
	float totalScore;
	char grade;
};

int getLineOfFile()
{
	FILE *fileptr = NULL;
	fileptr = fopen(filename,"r");
	int students = 0;
	fscanf(fileptr,"%d",&students);
	fclose(fileptr);
	//printf("%d",countLine);

	return students;
}


char GetGrade(int _score)
{
	if(_score >= 90 && _score <= 100) return 'A';
	else if(_score >= 80 && _score < 90) return 'B';
	else if(_score >= 70 && _score < 80) return 'C';
	else if(_score >= 60 && _score < 70) return 'D';
	else return 'F';

}
	//struct StudentInfo stu[cL];
void getStudentInfoFromFile(struct StudentInfo *stu)
{
	FILE *fileptr = NULL;
	fileptr = fopen(filename,"r");
	int i = 0,j ;
	int countLine = 0;
	char line[1000];
	if(fileptr == NULL)
	{
		//printf("Exit\n");
		exit(0);
    }
	//struct StudentInfo stu[countLine];
	//printf("%p %d\n",fileptr,countLine);
	fclose(fileptr);
	fileptr = NULL;
	fileptr = fopen(filename,"r");

	if(fileptr == NULL)
	{	exit(0);  }
    fscanf(fileptr,"%d",&countLine);
    //printf("Count line is %d",countLine);
	while(fscanf(fileptr,"%s %s %s %f %f %f %f %f",
		stu[i].ID , stu[i].firstN , stu[i].lastN , &stu[i].test[0] , &stu[i].test[1]
		,&stu[i].test[2] , &stu[i].test[3] , &stu[i].test[4]) != EOF) //6
	{	//printf("--%d--\n",i);
		stu[i].totalScore = 0;
		for(j = 0 ; j < 5 ; j++)
		{
			stu[i].totalScore += stu[i].test[j];
			//printf("for loop --%d--\n",j);
		}
		stu[i].grade = GetGrade((stu[i].totalScore));
		//printf("%s %c %f\n",stu[i].ID,stu[i].grade,stu[i].totalScore);
		//printf("%.2f\n",stu[i].totalScore);
		++i;
		//printf("%d -----------\n",i);
	}
	fclose(fileptr);
}


void studentInfo(struct StudentInfo stu[],int numLine)
{
	char id[11];
	printf("Please enter your ID:");
	scanf("%s",id);
	int i , index = -1;
	for(i = 0; i < 6; i++)
	{
		if(strcmp(id,stu[i].ID) == 0)
		{
			//printf("index is %d\n",index);
			index = i; break;
		}
	}
	if(index >= 0 && index < numLine)
	{
		printf("%s %s %s\t%.2f\t%c\n\n",stu[index].ID,stu[index].firstN,stu[index].lastN,stu[index].totalScore,stu[index].grade);
	}
		//printf("index is %d\n",index);
}


float findMaximum(struct StudentInfo stu[] , int numLine)
{
	int i ;
	int index = -1;
	float max = stu[0].totalScore;
	for(i = 0 ; i < numLine ; i++)
	{
		if(stu[i].totalScore > max)
		{
			max = stu[i].totalScore;
		}
	}
	//printf("Maximum Score: %.2f\n",max);
	return max;
}
float findMinimum(struct StudentInfo stu[] , int numLine)
{
	int i ;
	int index = -1;
	float min = stu[0].totalScore;
	for(i = 0 ; i < numLine ; i++)
	{
		if(stu[i].totalScore < min)
		{
			min = stu[i].totalScore;
		}
	}
	//printf("Minimum Score: %.2f\n",min);
	return min;
}
float findAverage(struct StudentInfo stu[] , int numLine)
{
	int i;
	float sum = 0.0;
	for(i = 0 ; i < numLine ; i++)
	{
		sum += stu[i].totalScore;
	}
	sum /= numLine;
	//printf("Average Score: %.2f\n",sum);
	return sum;

}
void gradeReportOnScreen(struct StudentInfo stu[],int numLine)

{
	printf("\nGrade Report:"); newline;
	int i;
	for(i = 0 ; i < numLine ; i++)
	{
		printf("%s %s %s\t%.2f\t%c\n",stu[i].ID,stu[i].firstN,stu[i].lastN,stu[i].totalScore,stu[i].grade);
	}
	//findMaximum(stu,numLine);
	//findMinimum(stu,numLine);
	//findAverage(stu,numLine);
	printf("Maximum Score: %.2f\n",findMaximum(stu,numLine));
	printf("Minimum Score: %.2f\n",findMinimum(stu,numLine));
	printf("Average Score: %.2f\n\n",findAverage(stu,numLine));
}

void gradeReportInFile(struct StudentInfo stu[],int numLine)
{
	FILE* fptr = NULL;
	fptr = fopen("grade.out","w");
	if(fptr == NULL) exit(0);
	int i;
	fprintf(fptr,"Grade Report:\n");
	for(i = 0; i < numLine ; i++)
	{
		fprintf(fptr,"%s %s %s %.2f %c\n",stu[i].ID,stu[i].firstN,stu[i].lastN,stu[i].totalScore,stu[i].grade);
	}
	fprintf(fptr,"Maximum Score: %.2f\n",findMaximum(stu,numLine));
	fprintf(fptr,"Minimum Score: %.2f\n",findMinimum(stu,numLine));
	fprintf(fptr,"Average Score: %.2f\n",findAverage(stu,numLine));

	fclose(fptr);
}

#pragma end region


int main()
{
	//printf("%d\n",getLineOfFile());
	struct StudentInfo stu[getLineOfFile()];
	getStudentInfoFromFile(stu);

	int menu = -1;
	do{
		printf("Menu:"); newline
		printf("1. Show a student data"); newline
		printf("2. Print the grade report on the screen"); newline
		printf("3. Print the grade report in a file called grade.out"); newline
		printf("0. Quit program"); newline
		printf("Enter your choise <1, 2, 3 or 0> :");

		scanf("%d",&menu);
	if(menu == 1)
	{
		studentInfo(stu,getLineOfFile());
	}
	else if(menu == 2)
	{
		gradeReportOnScreen(stu,getLineOfFile());
	}
	else if(menu == 3)
	{
		gradeReportInFile(stu,getLineOfFile());
	}
	/*else {
		return 0;
	}*/
	}while(menu >=1 && menu <= 3);








	return 0;
}
