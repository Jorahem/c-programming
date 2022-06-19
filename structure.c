#include<stdio.h>
#include<conio.h>
struct hello
{
	char N[20];
	int s;
}s[5];
void main()
{
	int i;
	for (i=0;i<5;i++)
	{
		printf("enter name::");
		scanf("%s",s[i].N);
		printf("enter salary ::");
		scanf("%d",&s[i].s);
	}
	printf("hiii we are inside structure program");
	for(i=0;i<5;i++)
	{
		printf("name=%s",s[i].N);
		printf("\nsalary=%d",s[i].s);
	}
	getch();
}