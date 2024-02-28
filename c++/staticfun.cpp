#include<iostream>
using namespace std;
class A{

    public : static void show(){
        cout<<"Helo";
    }

};

int main(){
    A::show();
    return 0;
}