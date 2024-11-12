#include<stdio.h>
	//STUDENT NAME: AYUTH MANGMESAP
	//STUDENT NUMBER: 5809610347
	
	int main()
	{	char chr;
		//printf("%c",'A'||'a');
		printf("Enter string:");
		scanf("%c",&chr);
	
		while(chr != '#')
		{
			switch(chr)
			{
				case 'A': 	printf("2-");			break; //2
				case 'B': 	printf("22-");			break; //22
				case 'C': 	printf("222-");			break; //222
				
				case 'D': 	printf("3-");			break; //3
				case 'E': 	printf("33-");			break; //33
				case 'F': 	printf("333-");			break; //333
			
				case 'G': 	printf("4-");			break; //4
				case 'H': 	printf("44-");			break; //44
				case 'I': 	printf("444-");			break; //444
					
				case 'J': 	printf("5-");			break; //5
				case 'K': 	printf("55-");			break; //55
				case 'L': 	printf("555-");			break; //555
				
				case 'M': 	printf("6-");			break; //6
				case 'N': 	printf("66-");			break; //66
				case 'O': 	printf("666-");			break; //666
				
				case 'P':	printf("7-"); 			break; //7
				case 'Q':	printf("77-"); 			break; //77
				case 'R': 	printf("777-");			break; //777
				case 'S': 	printf("7777-");		break; //7777
				
				case 'T':	printf("8-"); 			break; //8
				case 'U': 	printf("88-");			break; //88
				case 'V': 	printf("888-");			break; //888
				
				case 'W':	printf("9-"); 			break; //9
				case 'X': 	printf("99-");			break; //99
				case 'Y':	printf("9-"); 			break; //999
				case 'Z': 	printf("99-");			break; //9999
				
				case 'a': 	printf("2-");			break; //2
				case 'b': 	printf("22-");			break; //22
				case 'c': 	printf("222-");			break; //222
				
				case 'd': 	printf("3-");			break; //3
				case 'e': 	printf("33-");			break; //33
				case 'f': 	printf("333-");			break; //333
			
				case 'g': 	printf("4-");			break; //4
				case 'h': 	printf("44-");			break; //44
				case 'i': 	printf("444-");			break; //444
					
				case 'j': 	printf("5-");			break; //5
				case 'k': 	printf("55-");			break; //55
				case 'l': 	printf("555-");			break; //555
				
				case 'm': 	printf("6-");			break; //6
				case 'n': 	printf("66-");			break; //66
				case 'o': 	printf("666-");			break; //666
				
				case 'p':	printf("7-"); 			break; //7
				case 'q':	printf("77-"); 			break; //77
				case 'r': 	printf("777-");			break; //777
				case 's': 	printf("7777-");		break; //7777
				
				case 't':	printf("8-"); 			break; //8
				case 'u': 	printf("88-");			break; //88
				case 'v': 	printf("888-");			break; //888
				
				case 'w':	printf("9-"); 			break; //9
				case 'x': 	printf("99-");			break; //99
				case 'y':	printf("999-"); 		break; //999
				case 'z': 	printf("9999-");		break; //9999
				case ' ': 	printf("0-");			break; //0
				
				case '#':	break;	
				default: printf("-"); break;
			}
			scanf("%c",&chr);
		}
		
		return 0;
	}
