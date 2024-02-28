#include<stdio.h>
struct student
{
    int age;
};
void main()
{
    struct student global;
    struct student * ptr;
    ptr=&global;
    ptr->age=18;
    printf("%d",global.age);
}