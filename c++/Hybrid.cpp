#include<iostream>
using namespace std;


class A{

public :
A(){
    cout<<"Class A"<<endl;
}

};

class B:public A{
    
public :
B(){
    cout<<"Class B"<<endl;
}

};

class C:public A{   
public :
C(){
    cout<<"Class C"<<endl;
}
};



class D : public B,public C{
public :
D(){
    cout<<"Class D"<<endl;
}
};
int main(){
    D c;
return 0;
}



