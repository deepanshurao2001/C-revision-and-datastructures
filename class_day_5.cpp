#include<iostream>
using namespace std;
class Hero{
private:
    int health;
public:
    char level;
    Hero() {
        cout<<"Simple constructor called"<<endl;
    }
    Hero(int health , char level){
        this->health=health;
        this->level=level;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(int l){
        level = l;
    }
    void print(){
        cout<<"level is:"<<level<<endl;
        cout<<"Health is:"<<health<<endl;
    }
};
int main(){
    Hero suresh(70 , 'C');
    suresh.print();
    Hero ritesh(suresh);
    ritesh.print();
    /*ritesh.health= suresh.health;
    ritesh.health= suresh.health;*/
}