
#include "declaration.h"
#include "movie_details.c"
#include "string.h"
struct movie_details person[300];

void ticket2(int choice,char name[10],int id2,int price)
{       
        
        int count=0;
		//system("cls");
		printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t**********************************************************************\n");
        printf("\t Booking ID : %d \t\t\tShow Name : Mimi\n",id2);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 26-07-2021\n");
        printf("\t                                              Time      : 09:00pm\n");
        printf("\t                                              Hall      : 03\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id2;
        printf("\t**********************************************************************\n");
        return;
}