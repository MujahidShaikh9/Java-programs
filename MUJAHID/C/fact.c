#include<stdio.h>
void main(){
    int n=5;
    int res=1;
    for (int i = 1; i <= n; i++)
    {
        res=res*i;
    }
    printf("%d",res);
}