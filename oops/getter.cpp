#include<iostream>
using namespace std;

class hero{
    private:
    int health;
    public:
    char level;

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level; 
    }
    void sethealth(int h){
       health=h;
    }
    void setlevel(char ch){
       level=ch;
    }
};

int main(){
    hero a;
    cout<<"health is:"<<a.gethealth()<<endl;
    
    a.sethealth(60);
    a.level='s';
    cout<<"health is:"<<a.gethealth()<<endl;
    cout<<"level is:"<<a.level<<endl;
    
    return 0;
}