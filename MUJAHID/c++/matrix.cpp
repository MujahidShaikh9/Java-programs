#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int m1[3][3]={{3,2,1},{4,5,6},{7,8,9}};
    int m2[3][3]={{7,8,9},{6,5,4},{3,2,1}};
    int res[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            int r=0;
            r=m1[i][j]+m2[i][j];
            res[i][j]=r;
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            cout<<res[i][j];
            }
    }cout<<"\n";

return 0;
}
 