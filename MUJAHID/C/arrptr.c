#include<stdio.h>
void main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int *ptr=arr;
    for (int i = 0; i < 8 ; i++)
    {
        printf("%d ",*(ptr+i));
    }
    
}