#include<iostream>
using namespace std;

class Torch{

    public : 
    virtual void on()=0;
    virtual void off()=0;
};

class Mobile:public Torch{

    public : 
    void on(){
        cout<<"on";
    } 
    void off(){
        cout<<"off";
    }
};

int main(){
    Mobile m;
    m.on();
    m.off();
    return 0;
}