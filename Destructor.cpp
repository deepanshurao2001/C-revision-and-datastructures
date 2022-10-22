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
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
   //satatic
    Hero a;
    //dynamic
    Hero *b = new Hero();
    delete b;
}