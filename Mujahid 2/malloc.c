#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
};
void main()
{
    struct student * ptr;
    ptr=malloc  (sizeof(struct student));
    ptr->id=101;

    printf("%d", ptr->id);
}