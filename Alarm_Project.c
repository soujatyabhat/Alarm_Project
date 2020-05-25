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
void timeout()
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
			printf("End time is %d minutes and  %d seconds\n\n",set_mm,set_ss);
				if(temp_ss  == 60)
					{
						temp_mm++;
						temp_ss = 0;
						printf("Time = %d : %d",temp_mm,temp_ss);
					}
				else
					{
						printf("Time = %d : %d",temp_mm,++temp_ss);
					}
					
			}
	}
}
void alarm(int n)
{
SetConsoleTitle("Time Up!!!");
int i = 0;
while(i < n)
{
	Beep(100,100);
	Beep(500,100);
	Beep(500,100);
	delay(500);
	Beep(3000,300);
	Beep(100,300);
	Beep(100,100);
	Beep(1000,100);
	Beep(1000,100);
	delay(1000);
i++;
}
system("cls");
}
void start(int n)
{
	timeout();
	system("color f4");
	system("cls");
	printf("Time Up!!! This is the time for Completing your pending job. Good Lock!!\n");	
	alarm(n);
	printf("Good Bye\n\n");
	system("pause");
	
}
void off(int n)
{
	timeout();
	system("cls");
	system("color f4");
	printf("The Computer needs to rest for few hours!!! \n");	
	alarm(n);
	system("cls");
	printf("Good Bye User!!\n");
	delay(2000);
	system("shutdown /p");
}
void main()
{
	int ch;
	system("color 0b");
	SetConsoleTitle("MyReminder");
	printf("\t\t\t\t Welcome to myReminder App \n");
	printf("\t\t\t ----------------------------------------------\n");
	printf("\t\t\t   Designed By : Soujatya Bhattacharya \n\n");
	printf("1.Set Alarm\n2.Shutdown The PC\n3.Exit\n\n");
	printf("Enter your choose : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				start(6);
				break;
		case 2:
				off(3);
				break;
		case 3:
				exit(0);
				break;
		default:
				printf("Wrong Choose");
	}	
}
