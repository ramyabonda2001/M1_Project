#include "declaration.h"
#include "movie_details.c"

struct movie_details person[300];
//int i;
//int count=0;
void details(void)
{
	int i;
	int count=0;
	char pass[10],pas[10]="pass";
	printf("Enter the password to see details: ");
	scanf("%4s",pass);
	if (strcmp(pass,pas)==0)
	{
		for (i=0;i<count;i++)
		{
			printf("seat no: %d is booked by %s booking id is %d\n",person[i].seat,person[i].name,person[i].id);
		}
	}
	else                                                 
		printf("Entered password is wrong \n");
		//system("PAUSE");
		//system("CLS");
	
} 
