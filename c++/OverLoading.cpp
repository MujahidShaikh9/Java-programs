#include<iostream>
using namespace std;
class A{

public :
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a,int b,int c){
    cout<<a+b+c<<endl;
}

};

int main(){
   A a;
    a.add(2,3,4);
    a.add(2,3);
    return 0;
}