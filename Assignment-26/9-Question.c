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
    printf("\n %d \t %s \t\t %s",s.rollno,s.name,s.dept);
}
int main()
{
    int i,n;
    struct student s1[1000];

    printf("Enter How Many Student Information That You Want To Store : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        s1[i]=store_info_of_stud();
    for(i=0;i<n;i++)
        display(s1[i]);
}

