#include<dos.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void alarm()
{
SetConsoleTitle("Time Up!!!");
int go;
system("color f4");
printf("Time Up!!! This is the time for Completing your pending job. Good Lock!!\n");
while(1)
{
	Beep(1000,200);
	Beep(1000,200);
	Beep(1000,200);
	delay(500);
	Beep(1000,500);
	Beep(1000,500);
	Beep(1000,200);
	Beep(1000,200);
	Beep(1000,200);
	delay(1000);
}
}
void start()
{
	system("cls");
	SetConsoleTitle("Run...");
	int set_mm,set_ss;
	int temp_mm,temp_ss;
	system("color 1e");
	printf("Enter your time limit (MM SS): ");
	scanf("%d %d",&set_mm,&set_ss);
	temp_mm = temp_ss = 0;
	system("cls");
	while(1)
	{
		delay(1000);
		if((set_mm == temp_mm) && (set_ss == temp_ss))
			{
				break;
			}
		else
			{
			system("cls");
				if(temp_ss  == 60)
					{
						temp_mm++;
						temp_ss = 0;
						printf("\t\tTime = %d : %d",temp_mm,temp_ss);
					}
				else
					{
						printf("\t\tTime = %d : %d",temp_mm,++temp_ss);
					}
					
			}
	}
	system("cls");
	alarm();
}
void main()
{
	int ch;
	system("color 0b");
	SetConsoleTitle("MyReminder");
	printf("\t\t\t\t Welcome to myReminder App \n");
	printf("\t\t\t ----------------------------------------------\n");
	printf("\t\t\t   Designed By : Soujatya Bhattacharya \n\n");
	printf("1.Set Alarm\n2.Exit\n\n");
	printf("Enter your choose : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				start();
				break;
		case 2:
				exit(0);
				break;
		default:
				printf("Wrong Choose");
	}	
}
