#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
 int rollno;
 float marks;
 char name[100];
};
int main()
{
  int i;
  struct student sy[40];
  int r;
  float m;
  char n,temp[100];
  for(i=0;i<3;i++)
  {
    printf("Enter rollno\t");

    scanf("%d",&r);
    sy[i].rollno=r;
   printf("Enter marks\t");

    scanf("%f",&m);
    sy[i].marks=m;

    printf("Enter name\t");
    scanf("%s",&temp);
    strcpy(sy[i].name,temp);
   }
for(i=0;i<3;i++){
printf("\nrollno :%d\t marks :%f\t name :%s\t",sy[i].rollno,sy[i].marks,sy[i].name);
}
getch();
}


