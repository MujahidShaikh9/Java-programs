#include<iostream>
using namespace std;

void show(){
    static int a=0;
    int b=0;
    a++;
    b++;
    cout<<"A : "<<a<<endl;
    cout<<"B : "<<b<<endl;
}

int main(){
    show();
    show();
    show();
    return 0;
}