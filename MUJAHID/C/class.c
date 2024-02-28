#include<stdio.h>
struct student
{
    int rollno;
    float marks;
};
int main()
{
    int i;
    struct student sy[40];
    printf("Enter 5 student record\n");
    for(i=0;i<3;i++)
    {
        printf("Enter roll no :\n");
        scanf("%d",&sy[i].rollno);
        printf("Enter per :\n");
        scanf("%f",&sy[i].marks);
    }
    for(i=0;i<3;i++)
    {
        printf("\n roll no :%d,name :%f\n",sy[i].rollno,sy[i].marks);
    }
    return 0; 
}
