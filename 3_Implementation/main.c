
#include "stdio.h"
#include "stdlib.h"
//#include "movie_details.c"
#include "declaration.h" 
#include "string.h"

int count=0;
int main()
{
    login();
	int **seat,price=500,slection,i;
	seat=(int **)calloc(101,sizeof(int *));
	for (i=0;i<3;i++)
		*(seat+i)=(int *)calloc(101,sizeof(int ));
	int x=0;
	while(x!=5)
	{   
		int ch;
		ch=choice1();
		switch(ch)
		{
			case 1:
				price=change_prize(price);
				break;
			case 2:
				details();
				break;	
			case 3:	
				slection=movie();
				reservation_tickets(seat[slection-1],price,slection);	
				count++;
				break;
			case 4:
				slection=c_movie();	
				cancel_ticket(seat[slection-1]);	
				break;
			case 5:
				x=5;
				break;
			default: 
				printf("Please Select Correct Choice.....\n Thank You....\n");
				break;	
		}
	}
	return 0;
}
int choice1(void)
{
	int choice;
	printf("\n");
	printf("                 Simple Movie Ticket Booking System\n"               );
	printf(" *****************************************************************\n");
	printf("             1- To edit price of ticket (only admin):             \n");
	printf("             2- To view reserved tickets (only admin):            \n");
	printf("             3- To booking ticket:                                \n");
	printf("             4- To cancel the seat:                               \n");
	printf("             5- Exit system:                                      \n");
	printf("******************************************************************\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}


           






