#include<iostream>
using namespace std;
class Employee
{
    public:

    Employee(){}

    Employee(int a,int b)
    {
    cout<<a+b;
    }
};
int main()
{
   Employee e1;
   e1= Employee(3,5);
}