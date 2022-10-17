#include<iostream>
using namespace std;
class Hero{
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
        health = h;
    }
    void setlevel(int l){
        level = l;
    }
};
int main(){
    //static allocation
    Hero a;
    a.sethealth(90);
    a.setlevel('A');
    cout<<"level is : "<<a.getlevel()<<endl;
    cout<<"Health is : "<<a.gethealth()<<endl;
    //dynamic allocation
    Hero *b= new Hero;
    b->sethealth(100);
    b->setlevel('C');
    cout<<"level is : "<<(*b).level<<endl;
    cout<<"Health is : "<<(*b).gethealth()<<endl;
    cout<<"level is : "<<b->level<<endl;
    cout<<"Health is : "<<b->gethealth()<<endl;

}