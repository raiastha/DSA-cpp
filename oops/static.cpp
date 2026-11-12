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
    hero k;
    //static
    k.sethealth(20);
    k.setlevel('D');
    cout<<"health 1 is:"<<k.gethealth()<<endl;
    cout<<"level 1 is:"<<k.level<<endl;

    //dynamic
    hero *L=new hero;
    L->sethealth(10);
    L->setlevel('F');
    cout<<"health 2 is:"<<L->gethealth()<<endl;
    cout<<"level 2 is:"<<L->level<<endl;
    return 0;
}