#include<iostream>
using namespace std;
class emp_info
{
    public:
    int id = 101;
};
class employee:public emp_info
{
    public:
    string name = "sagar";
};
int main()
{
    employee e1;
    cout<<"id :"<<e1.id<<endl;
    cout<<"name :"<<e1.name<<endl;
    return 0;
}