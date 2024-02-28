#include<iostream>
using namespace std;

class A{

public :
void show(){
    cout<<"Class A"<<endl;
}

};

class B{
    
public :
void show(){
    cout<<"Class B"<<endl;
}

};

class C:public A,public B{   
public :
C(){
    A::show();
    B::show();
}
};

int main(){
    C c;
return 0;
}



