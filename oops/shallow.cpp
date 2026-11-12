#include<iostream>
#include <cstring>
using namespace std;
class hero{
   private:
   int health;
   public:
   char *name;
   char level;
   //default constructor
   hero(){
    cout<<"default constructor"<<endl;
    name=new char[100];
   }
    //paratmerised constructor
   hero(int health){
   // cout<<"this:"<<this<<endl;
    this-> health=health;
   }
   hero(int health,char level,char name){
   // cout<<"this:"<<this<<endl;
   
   this->level=level;
    this-> health=health;
   }
//    //copy constructor
//    hero(hero& temp){
//     this->health=temp.health;
//   this->level=temp.level;
  // }
   void print(){
    cout<<endl;
    cout<<"[ print level:"<<this->level;
    cout<<"print health:"<<this->health;
    cout<<"print name:"<<this->name<<"]";
    cout<<endl<<endl;
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
   void setname(char name[]){
    strcpy(this->name,name);
   }
};

int main(){
    hero tero1;
    tero1.sethealth(10);
    tero1.setlevel('c');
    char name[7]="babbar";
    tero1.setname(name);
    tero1.print();

    hero tero2(tero1);
    tero2.print();

    tero1.name[0]='g';
    tero1.print();

    tero2.print();
        return 0;
}