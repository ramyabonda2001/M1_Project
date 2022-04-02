
#include "declaration.h"
#include "string.h"
#include "movie_details.c"
struct movie_details person[300];



void ticket1(int choice,char name[10],int id2,int price)
{
    
        int count=0;
		//system("cls");
		printf("\n\n");
        printf("\t-----------------------THEATER BOOKING TICKET-------------------------\n");
        printf("\t**********************************************************************\n");
        printf("\t Booking ID : %d \t\t\tShow Name : Shershaah\n",id2);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 12-08-2021\n");
        printf("\t                                              Time      : 08:00pm\n");
        printf("\t                                              Hall      : 02\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
		person[count].id=id2;
        printf("\t*********************************************************************\n");
        return;
}