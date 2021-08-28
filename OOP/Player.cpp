/*
 * Example written during the c++ workshop.
 * */
#include<iostream>
#include<cstdlib>

using namespace std;

class Entity{
    private:
        int x, y;

    public:
    Entity(int a, int b){
        //cout<<"In entity class constructor\n";
        x = a;
        y = b;
    }
    Entity(){
        x = 0;
        y = 0;
    }

    ~Entity(){
        //print();
        //cout<<"Called Entity Destructor\n";
    }
    void show(){
        cout<<"Entity is at: ("<<x<<","<<y<<")\n";
    }
    void set_x(int x){
        this-> x = x;
    }
    int get_x(){ return x; }
    int get_y(){ return y; }
};

class Player : public Entity{
    private:
        float cash;
    public:
        void move_x(int a){
            set_x(get_x()+a);
        }
        Player(int x, int y, float cash) : Entity(x,y) {
            cout<<"In player class parametrized constructor\n";
            this-> cash = cash;
        }
        Player(): Entity(0,0){
            cout<<"In player class default constructor\n";
            cash = 0;
        }
        ~Player(){
            cout<<"Player class destructor\n";
        }
        void show(){
           cout<<"Player is at: ("<<get_x()<<","<<get_y()<<")\n";
            cout<<"Player has "<<cash<<" left\n";
        }

};


int main(){
    Player p1(50,50,324);
    p1.show();

    Player* ptr = new Player();
    delete ptr;

    return 0;
}

