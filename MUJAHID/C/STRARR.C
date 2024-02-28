#include<stdio.h>
#include<conio.h>
struct student
{
 int rollno;
 float marks;
};
int main()
{
  int i;
  struct student sy[40];
  int r;
  float m;

  for(i=0;i<3;i++)
  {
    printf("Enter rollno\n");

    scanf("%d",&r);
    sy[i].rollno=r;
   printf("Enter marks\n");

    scanf("%f",&m);
    sy[i].marks=m;
  }
for(i=0;i<3;i++){
printf("\nrollno :%d\n marks :%f\n",sy[i].rollno,sy[i].marks);
}
getch();
}