#include<iostream>
using namespace std;
int main(){
    int n,c=0,i;
    cout<<"Enter  value"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
            c++;
        }
    }

    if(c<=2){
        cout<<"prime";
        }else{
            cout<<"not prime";
        }
    
}