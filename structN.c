#include<stdio.h>
#include<conio.h>
struct employee
{
	int sal;
	char n[20];
}e[100];
void main()
{
	int sum=0,i,n;
	printf("enter any number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name");
		scanf("%s",&e[i].n);
		printf("enter salary");
		scanf("%d",&e[i].sal);
		sum=sum+e[i].sal;
	}
	printf("total salary=%d",sum);
	getch();
	
}