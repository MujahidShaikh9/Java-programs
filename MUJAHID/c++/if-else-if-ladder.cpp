#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Marks"<<endl;
    cin>>marks;
    if(marks>85 && marks<=100){
        cout<<"A Grade"<<endl;
    }else if(marks>60 && marks<=85){
        cout<<"B Grade"<<endl;
    }else if(marks>30 && marks<=60){
        cout<<"C Grade"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }
    return 0;
}