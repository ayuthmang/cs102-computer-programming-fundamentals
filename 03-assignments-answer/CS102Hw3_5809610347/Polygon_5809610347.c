#include<stdio.h>
#include<math.h>

	//STUDENT NAME: AYUTH MANGMESAP
	//STUDENT ID: 5809610347

float computePeri(float result[20],int count)
{
	int i , j;float res = 0.0;
	for(i = 0 ;  i < (count - 1) ; i++)
	{
		
		res+= result[i];
		//printf("%d %.0f\n",i,result[i]);
	}
	
	return res;
}

float computeLength(float point[][2],int count)
{
	int i , j ;
	float result[20];
	for(i = 0; i < (count-1) ; i++)
	{
		if(i == 0)
		{					//x1			x2					y1				y1
			result[i] = abs(point[i][0] - point[count-2][0]) + abs(point[i][1] - point[count-2][1]);
			//printf("%.0f\n",result[i]);	
			printf("(%.0f,%.0f) (%.0f,%.0f): %.0f\n",point[i][0],point[i][1],point[count-2][0],point[count-2][1],result[i]);
	
		}
		else
		{
			result[i] = abs(point[i][0] - point[i-1][0]) + abs(point[i][1] - point[i-1][1]);
			//printf("%.0f\n",result[i]);		
			printf("(%.0f,%.0f) (%.0f,%.0f): %.0f\n",point[i][0],point[i][1],point[i-1][0],point[i-1][1],result[i]);
	
		}
		
	}
	printf("Perimeter: %.0f",computePeri(result,count));
	return  0;
}


int main()
{
	float point[20][2];
	int count = 0;
	
	while(point[count-1][0]!= -1 || point[count-1][1] != -1 && count != 20) // 0 - 19 if == 20 check then out loop
	{															//case 1: -1 -1 count = 1
		//printf("%d",count);
		scanf("%f %f",&point[count][0],&point[count][1]);
		++count;
		//1 1
	}
	//printf("%d\n",count-1);  //count -1 = length of array
	//printf("%d %d",x[count-2],y[count-2]);
	//printf("%d",count);
	
	//printf("%d",count - 1);

	computeLength(point,count);
	//length(1,2) =  |x1-x2| + |y1-y2|
	return 0;
}
