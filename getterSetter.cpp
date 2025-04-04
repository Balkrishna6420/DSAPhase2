//using getter and setter we can access the privte content of the class by the outsideer main function also
#include<iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;
    

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
    Hero h1;//staticalyy allocated
    h1.setHealth(80);
    h1.setlevel('B');

    cout<<"Health will be"<<h1.getHealth()<<endl;
    cout<<"level will be"<<h1.level<<endl;
    //dynamically allocation will be
    Hero *h2=new Hero; 
    h2->setHealth(90);
    h2->setlevel('c');
    cout<<"Health will be"<<(*h2).getHealth()<<endl;
    cout<<"level will be"<<(*h2).level<<endl;
    //or
    cout<<"Health will be"<<h2->getHealth()<<endl;
    cout<<"level will be"<<h2->level<<endl;
//     cout<<"h1 Health is"<<h1.getHealth()<<endl;
//     cout<<"h1 level"<<h1.getlevel()<<endl;
}