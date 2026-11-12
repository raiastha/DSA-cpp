#include<iostream>
using namespace std;

class animal{
    public:
    int height;
    string size;

    void speak(){
        cout<<"animal speak"<<endl;
    }
};

class dog:public animal{
    int color;

    // void has(){
    //     cout<<"dog color is black"<<endl;
    // }
};

class pitbull:public dog{

};

int main(){
    pitbull p;
    p.speak();
}