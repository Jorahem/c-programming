#include<stdio.h>
#include<conio.h>
struct employee
{
	int sal;
	char n[20],add[30];
}e1;
void main()
{
	int i;
	i=sizeof (struct employee);
	printf("size of stuctures=%d",i);
	getch();
	
}