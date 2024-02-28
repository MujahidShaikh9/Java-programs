#include<iostream>
using namespace std;

class A{

    private : int x;

    public:
    void setX(int x){
        this->x=x;
    }

    int getX(){
        return x;
    }

};

int main(){

    A a ;
    a.setX(10);
    cout<<a.getX();

    return 0;
}