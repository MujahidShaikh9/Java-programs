#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++){
            if(arr[i][j]%2==0){
                cout<<"even"<<arr[i][j]<<endl;
            }
        //cout<<i<<j<<arr[i][j]<<endl;
        }
    }

return 0;
}
 