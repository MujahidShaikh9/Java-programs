#include<iostream>
class a{
    //non parameterized constructor
    public:
    a(){
        std::cout<<"non parameterized constructor:"<<std::endl;
    }
    //parameterized constructor
    a(int age){
        std::cout<<"value of a:"<<age<<std::endl;
    }
    a(int age ,int num){
        std::cout<<"value of num:"<<age<<num<<std::endl;
    }
};
int main(){
    a A=a(82,51);
    return 0;
}