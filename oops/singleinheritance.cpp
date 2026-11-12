#include<iostream>
using namespace std;
//single inheritance
class animal{
    public:
    int height;
    string color;
    string size;

    void speak(){
        cout<<"animal speak"<<endl;
    }
};

class dog:public animal{

};

int main(){
    dog d;
    d.speak();
}