#include<iostream>
using namespace std;
class hero{
   private:
   int health;
   public:
   char level;
   //default constructor
   hero(){
    cout<<"default constructor"<<endl;
   }
    //paratmerised constructor
   hero(int health){
   // cout<<"this:"<<this<<endl;
    this-> health=health;
   }
   hero(int health,char level){
   // cout<<"this:"<<this<<endl;
   this->level=level;
    this-> health=health;
   }
   //copy constructor
   hero(hero& temp){
    this->health=temp.health;
    this->level=temp.level;
   }
   void print(){
    cout<<"print level:"<<this->level<<endl;
    cout<<"print health:"<<this->health<<endl;
   }

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
     
    hero e(10,'r');
    e.print();

    hero t(e);
    t.print();

//    //hero k(10);
//     //cout<<"k is:"<<&k<<endl;
//      //k.print();
    

//     //dynamic
//    // hero *L=new hero(11);
//     L->print();
   
//     hero temp(22,'d');
//     temp.print();
    return 0;
}