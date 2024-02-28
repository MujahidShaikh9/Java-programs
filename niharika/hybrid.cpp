#include<iostream>

class grandparent{
    public:
    grandparent(){
        std::cout<<"grandparent:"<<std::endl;
    }
};
class father:public grandparent{
    public:
    father(){
        std::cout<<"father"<<std::endl;
    }
};
class mother:public grandparent{
    public:
   mother(){
    std::cout<<"mother"<<std::endl;
   }
};
class child:public father,public mother{
    public:
   child(){
    std::cout<<"child:"<<std::endl;
   }
};
int main(){
    child a;
   
    return 0;
}