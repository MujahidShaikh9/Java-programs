#include<stdio.h>
struct student
{
    int id ;
    float per;
};
void main()
{
    struct student  global;
    
    printf("Enter the value of global.id\n");
    scanf("%d",&global.id);
    printf("Enter the value of global.per\n");
    scanf("%f",&global.per);
    printf("\nid :%d\n",global.id);
    printf("per :%f\n",global.per);
}