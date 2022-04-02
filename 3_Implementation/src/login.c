/**
 * @file ticketbook.c
 * @author Tanuja Patgar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "declaration.h"
#include "movie_details.c"

void login()
{
	int a=0;
	char username[10];
	char userpwd[10];
	char user[10]="tanuja";
	char pass[10]="123";
	do
	{
		//system("cls");
		printf("\t MOVIE TICKET BOOKING SYSTEM");
		printf("\t Enter Username: ");
		scanf("%9s",username);
		printf("\t Enter Password: ");
		scanf("%9s",userpwd);
		if(strcmp(username,user)==0 && strcmp(userpwd,pass)==0)
		{
			printf("\n\n Welcome User!!!");
			printf("\n\n Press any key to continue...");
			//getchar();
			break;
		}
		else{
			printf("\n\n Login Unsuccessful....Please Try Again....");
			a++;
			//getchar();
		}	
	} while (a<=2);
	if(a>2){
	printf("\n Sorry you have entered the wrong username and password for four times !!!");
	//getchar();
	}
	//system("cls");
}
