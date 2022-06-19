#include<stdio.h>
#include<stdio.h>
struct employee
{
	char n[20];
	int s;
}e[3];
void main()
{
	int i;
	float sum=0,av;
	for(i=0;i<3;i++)
	{
		printf("enter name::");
		scanf("%s",e[i].n);
		printf("enter salary::");
		scanf("%d",&e[i].s);
	
	sum=sum+e[i].s;
   }
	av=sum/3;
	printf("average==%f",av);
    getch();
}