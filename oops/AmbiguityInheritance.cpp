#include<iostream>
using namespace std;

class parent1{
    public:
    int height;
    int age;

    public:
    void func(){
        cout<<"i am parent1"<<endl;
    }
};

class parent2{
    public:
    void func(){
        cout<<"i am parent2"<<endl;
    }
};

class child:public parent1,public parent2{

};

int main(){
    child c;
    c.parent1::func();
    c.parent2::func();
    
    return 0;
}