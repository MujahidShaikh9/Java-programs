#include<iostream>
using namespace std;
class math{
    public: int x = 10;
   
    void add( int a,int b)
    {
        int sum;
        sum=a+b;
        cout<<sum<<endl;
    }

    void sub(int x ,int y)
    {
        int sum;
        sum=x-y;
        cout<<sum<<endl;
    }

};
int main(){
    math m;
    m.x=20;
    cout<<m.x;
   // m.add(20,40);
   // m.sub(20,40);
    
}