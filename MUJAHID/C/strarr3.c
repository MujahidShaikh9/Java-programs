#include<stdio.h>
#include<conio.h>
#include<string.h>


struct student
{
 int rollno;
 float marks;
 char name[100];
}syco[200];
void insert(int idx)
{
    int rollno;
    float marks;
    char name[100];
    printf("Enter rollno :\t");
    scanf("%d",&rollno);
    syco[idx].rollno=rollno;
    printf("Enter marks :\t");
    scanf("%f",&marks);
    syco[idx].marks=marks;
    printf("Enter name :\t");
    scanf("%s",&name);
   strcpy(syco[idx].name,name);
}
void display()
{
    for (int i = 0; i < 3; i++)
    {
    printf("\t rollno :%d\t marks :%f\t name :%s\t\n",syco[i].rollno,syco[i].marks,syco[i].name);
}
}

int main()
{
    insert(0);
    insert(1);
    insert(2);
    display();
}
// {
//   int i;
//   struct student sy[40];
//   int r;
//   float m;
//   char n,temp[100];
//   for(i=0;i<3;i++)
//   {
//     printf("Enter rollno\t");

//     scanf("%d",&r);
//     sy[i].rollno=r;
//    printf("Enter marks\t");

//     scanf("%f",&m);
//     sy[i].marks=m;

//     printf("Enter name\t");
//     scanf("%s",&temp);
//     strcpy(sy[i].name,temp);
//    }
// for(i=0;i<3;i++){
// printf("\nrollno :%d\t marks :%f\t name :%s\t",sy[i].rollno,sy[i].marks,sy[i].name);
// }
// getch();
// }


