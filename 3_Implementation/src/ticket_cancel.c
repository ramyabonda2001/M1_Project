
#include "declaration.h"
#include "movie_details.c"
#include "string.h"


struct movie_details person[300];
void cancel_ticket(int *array)
{
      int Cancelseat,i,stop;
	  printf("Please enter ID number of ticket: ");
	  scanf("%d",&Cancelseat);
	  for (i=0;i<300;i++)
	  {
	  		if(Cancelseat==person[i].id)
	  		{
					 stop=5;
					 //system("cls");
					 printf("\t%s your seat is %d cancelled\t",person[i].name,person[i].seat);
					 array[person[i].seat]=0;
					 i=300;
					 printf("\n\n");
	  		}
	  }
	  if (stop!=5)	
	  		printf("Ticket ID number is incorrect please enter right one to cancel ticket: \t");
			printf("\n\n");
}