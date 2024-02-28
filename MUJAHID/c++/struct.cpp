#include<iostream>
using namespace std;
struct student
{
    int id ;
    float per;

};
int main(){
    struct student global;
    cout<<"Enter id :"<<endl;
    cin>>global.id;
    cout<<"Enter per :"<<endl;
    cin>>global.per;
    cout<<"id "<<global.id<<endl;
    cout<<"per "<<global.per<<endl;
}