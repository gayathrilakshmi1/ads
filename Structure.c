#include<stdio.h>
struct employee 
{
int emp_id;
char name[50];
float salary;
};
int main()
{
struct employee e[3];
int i;
printf("enter details of 3 employees:\n");
for(i=0;i<3;i++)
{
printf("\nemployee %d:\n",i+1);
printf("enter employee id:");
scanf("%d",&e[i].emp_id);
printf("emter name:");
scanf("%s",e[i].name);
printf("enter salary:");
scanf("%f",&e[i].salary);
}
printf("\n---employee details---\n");
for(i=0;i<3;i++)
{
printf("\nemployee %d\n",i+1);
printf("employee id:%d\n",e[i].emp_id);
printf("name:%s\n",e[i].name);
printf("salary:%2f\n",e[i].salary);
}
return 0;
}

