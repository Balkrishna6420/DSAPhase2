#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;

    Hero(){//once we write our manual constructor default constructor generatwd i  the system will be omitted
        cout<<"Constructor called"<<endl;
    }
    Hero(int health){//parametrized constructor 
        this->health=health;
    }
    Hero(int health,char level){//parametrized constructor ;current object ka address this keyword me store hota hai
        cout<<"Address ofthis"<<this<<endl;
        this->level=level;//object ke level ke andar input ke level o copy kar diya
        this->health=health;
    }
    void print(){
        cout<<"level"<<this->level<<endl;
        cout<<"Health"<<this->health<<endl;
    }

    //khud ka copy constructor kaise banate hai 
    Hero(Hero &temp){
        this->health=temp.health;
        this->level=temp.level;
    }

    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health=h;
    }
    char setlevel(char ch ){
        level=ch;
    }
};
int main(){
    Hero ram(70,'c');
    ram.print();

    Hero Shyam(ram);//default copy constructor
    Shyam.print();
}