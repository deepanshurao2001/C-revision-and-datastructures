#include<bits/stdc++.h>
using namespace std;
class Hero{
private:
    int health;
public:
    char *name;
    char level;
    Hero() {
        cout<<"Simple constructor called"<<endl;
        name = new char[100];
    }
   /* Hero(int health , char level){
        this->health=health;
        this->level=level;
    }*/
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int health){
        this->health = health;
    }
    void setlevel(int level){
        this->level = level;
    }
    void setName(char name[]){
        strcpy(this->name, name);
    }
    void print(){
        cout<<endl;
        cout<<"[name:"<<this->name;
        cout<<"level :"<<this->level<<" ,";
        cout<<"Health :"<<this->health<<" ]";
        cout<<endl;
    }
    //copy constructor
  Hero (Hero& temp){
        char *ch= new char[strlen(temp.name)+1];
        this->name = ch;
        strcpy(ch , temp.name);
        this->health= temp.health;
        this->level = temp.level;
    }
};
int main(){
    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Babber";
    hero1.setName(name);
    hero1.print();
   // default copy constructor
   Hero hero2(hero1);
   hero2.print();
   hero1.name[0] = 'G';
   hero1.print();
   hero2.print();
}