#include<iostream>
using namespace std;

class animal{
    public:
    int height;
    string size;

    public:
    void speak() {
        cout<<"animal speak"<<endl;
    }
};

class dog{
    int color;
 
    public:
    void has(){
        cout<<"dog color is black"<<endl;
    }
};

class pitbull:public dog,public animal{

};

int main(){
    pitbull p;
    p.has();
    p.speak();

    return 0;

}