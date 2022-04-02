/**
 * @file declaration.h
 * @author Tanuja Patgar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __DECLARATION_H__
#define __DECLARATION_H__
#include "declaration.h"
#include "stdlib.h"
#include "math.h"
#include "stdio.h"
#include "assert.h"
#include "strings.h"


void login();
int change_prize(int);
void reservation_tickets(int *,int,int );
int choice1(void);
void cancel_ticket(int *);        
void ticket1(int choice,char name[10],int id2,int price);
void ticket2(int choice,char name[10],int id2,int price);
void ticket3(int choice,char name[10],int id2,int price);
int c_movie(void);
int movie(void);
void details(void);

#endif 