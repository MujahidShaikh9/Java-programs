#include<iostream>
class A{
    //non parameterized constructor
    public:
    A(){
        std::cout<<"this is non parameterized constructor:"<<std::endl;
    }
    //parameterized constructor
    A(int age){
        std::cout<<"value of a:"<<age<<std::endl;
    }
    A(int age,int num){
        std::cout<<"value of num:"<<age<<num<<std::endl;
    }
};
int main(){
    A a=A(23,49);
    return 0;
}