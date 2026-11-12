#include<iostream>
using namespace std;

class animal{
    public:
    int height;
    string size;

    public:
     public:
    void bark(){
        cout<<"dogs bark" << endl;
    }

    void meow(){
        cout<<"cat meows"<<endl;
    }

     void moww(){
        cout<<"cow mowws"<<endl;
    }
};

class cow{

};

class dog:public animal{

};

class cat:public animal,public cow{

};

int main(){
    cat c;
    dog d;
    
    c.meow();
    d.bark();
    
    return 0;
}
