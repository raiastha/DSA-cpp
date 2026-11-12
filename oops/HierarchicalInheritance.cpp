#include<iostream>
using namespace std;

class animal{
    public:
    int height;
    string size;

    public:
    void bark(){
        cout<<"dogs bark" << endl;
    }

    void meow(){
        cout<<"cat meows"<<endl;
    }
};

class dog:public animal{

};

class cat:public animal{

};

int main(){
    cat c;
    dog d;
    c.meow();
    d.bark();
    return 0;
}