#include<iostream>
using namespace std;

class subject{
    public:
    int health;
    char level;

};

int main(){ 
    subject h1;
    h1.health = 20;
    h1.level = 'B';
    cout<<"health of:"<<h1.health<<endl;
     cout<<"level of:"<<h1.level<<endl;
    return 0;
}
