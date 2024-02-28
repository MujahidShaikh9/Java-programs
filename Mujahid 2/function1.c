#include<stdio.h>
int add(int a,int b)
{
    return (a+b);
}
int sub(int c,int d)
{
    return (c-d);
}
int mul(int e,int f)
{
    return (e*f);
}
int div(int g,int h)
{
    return (g/h);
}
int calculator(int x,int y,int ch)
{
    switch(ch)
    {
    case 1: return add(x,y);
        break;
    case 2: return sub(x,y);
        break;
    case 3: return mul(x,y);
        break;
    case 4: return div(x,y);
        break;
    
    default: printf("invalid ch");
        return 0;
        break;
    }
}
void main()
{
    int a=10,b=20,ch;
    printf("Select your choice\n");
    printf("1.add\n 2.sub\n 3.mul\n 4.div\n");
    scanf("%d",&ch);
    printf("%d",calculator(a,b,ch));
}