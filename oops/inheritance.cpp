#include<iostream>
using namespace std;

class human{
    public:
    int height;
    string color;
    int age;

     void setheight(int h){
        height=h;
    }

};

class male:public human{
    int weight;

    void sleep(){
        cout<<"male sleep"<<endl;
    }

    int getheight(){
        return this -> height;
    }

   
};

int main(){
    male h1;
    h1.setheight(45);
    cout<<h1.height<<endl;
    return 0;
}