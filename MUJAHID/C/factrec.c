#include<stdio.h>
int fact(int n){
    int res =1;
    if(n>0)
    {
        res=n*fact(n-1);
    }
    return res;
}

void main()
{
    printf("%d",fact(5));
}