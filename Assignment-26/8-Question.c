#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    char dept[20];
};
struct student store_info_of_stud()
{
    struct student s;
    printf("Enter Student Rollno,Name And Department Name : ");
    scanf("%d",&s.rollno);
    fflush(stdin);
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    fflush(stdin);
    fgets(s.dept,20,stdin);
    s.dept[strlen(s.dept)-1]='\0';
    return s;
}
void display(struct student s)
{
    printf("\n %d \t %s \t %s",s.rollno,s.name,s.dept);
}
int main()
{
    int i;
    struct student s1[5];
    for(i=0;i<=4;i++)
        s1[i]=store_info_of_stud();
    for(i=0;i<=4;i++)
        display(s1[i]);
}
