#include<stdio.h>
#include<string.h>
struct Employee
{
  int id;
  char name[20];
  float salary;
};

struct Employee input_data()
{
    struct Employee e;

    printf("Enter empid,name and salary : ");
    scanf("%d",&e.id);

    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';

    scanf("%f",&e.salary);

    return e;
}
void highest_salary(struct Employee e[])
{
    int i,max;
    max=e[0].salary;
    for(i=0;i<=4;i++)
        if(e[i].salary>max)
            max=e[i].salary;

    printf("Highest salary employee details:");
    printf("\n-----------------------------\n");
    printf("EMPNO    NAME  SALARY\n");
    for(i=0;i<=4;i++)
    {
        if(e[i].salary==max)
            printf("\n%d\t %s\t %.2f",e[i].id,e[i].name,e[i].salary);
    }
}
void sortBySalary(struct Employee e[],int size)
{
    int i,r;
    struct Employee temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(e[i].salary > e[i+1].salary)
            {
                temp=e[i+1];
                e[i+1]=e[i];
                e[i]=temp;
            }
        }
    }
}
void sortByName(struct Employee e[],char size)
{
    int i,r;
    struct Employee temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {

                temp=e[i+1];
                e[i+1]=e[i];
                e[i]=temp;
            }
        }
    }
}
void display(struct Employee e)
{

    printf("\n%d\t %s\t %.2f",e.id,e.name,e.salary);

}
int main()
{
   struct Employee e[5];
   int i;
   for(i=0;i<=4;i++)
        e[i]=input_data();
   sortByName(e,5);
   for(i=0;i<=4;i++)
        display(e[i]);

    highest_salary(e);
}
