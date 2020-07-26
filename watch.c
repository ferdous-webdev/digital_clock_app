/*
  Digital Watch Project Developed by 
  Ferdous Mahmud Akash
  Started at - 26 July 2020
  Version - 0.0.01
  System - Linux (Ubuntu)
  Language - C
*/
#include<stdio.h>
#define CYCLE 60
//header part for windows 
#ifdef _WIN32
#include <conio.h>//header for clear screen
#define sleep(x) Sleep(x*1000)
#else
#include<unistd.h> //header for linux based system
#define clrscr() printf("\e[1:1H\e[2J") //clear screen header for linux
#endif
int main()
{
    int hour , minute , second;
    printf("Enter Hour Minute Second : ");
    //Input value from user
    scanf("%d%d%d",&hour,&minute,&second);
    
    clrscr(); // function for clear secreen
    
    int h = 0 , m = 0 , s = 0 ;
    
    //logical part for stop watch
    while(1)
    {
      printf("\n\n####### STOP WATCH #######\n\n\n");
      printf("         %.2d:%.2d:%.2d\n",h,m,s);
      printf("\n\n##########################\n\n\n");
      if(h == hour && m == minute && s == second)
      {  
         printf("\n\n## ---- Time Limit End ---- ##\n\n\n");
         break;
      }
      else
      {
      	 clrscr();// clearing screen
      }
      s++;
      sleep(1);// sleep function for wait 1 second
      
      if(s == CYCLE)
      {
      	 m++;
      	 s = 0;
      }
      if(m == CYCLE)
      {
      	 h++;
      	 m = 0;
      }
    }
	return 0;
}





















