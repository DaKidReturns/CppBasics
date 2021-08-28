#include <iostream>
/*
 * Example written during the c++ workshop.
 * */
using namespace std;

class Point{
    private:
    int x, y;

    // x should be greater than 10
    
    public:
    Point(int a, int b){
        cout<<"Parametrized constructor\n";
        if(a>10){
            x = a;
        }
        else{
            x = 11;
        }
        y = b;
    }
    Point(){
        cout<<"Default Constructor\n";
        x = 11;
        y = 0;
    }

    ~Point(){
        //print();
        //cout<<"Called Destructor\n";
    }


    void set_x(int a){
        
        if(a>10){
            x = a;
        }else{
            cout<<"Value of x stays the same\n";
        }
    }
    void set_y(int a){ y = a; }
    int get_x(){ return x;}
    int get_y(){ return y;}

    void print(){
        cout<<"X: "<< x<< " Y: "<< y<< endl;
    }

    /*Point add(const Point& p2){
        return Point(this -> x + p2.x,this -> y+p2.y);
    }*/
     //c = a+b
    Point operator+(const Point& b){
        return Point(x+b.x, y+b.y);
    }

   
    void add(int a){
        cout<<"First add Fucntion\n";
        this -> set_x(x+a);
        this -> set_y(y+a);
    }

    void add(int a, int b){
        cout<<"Second add Function\n";
        this -> set_x(x+a);
        this -> set_y(y+b);
    }


};

int main()
{

   Point p1 = {4,5};
    //p1.x = 9;
    p1.set_x(14);
    //p1.print();
    
    Point p2(6,10);
    //p2.print();

    Point p3 = p1+p2;
    p3.print();

    Point* p4 = new Point();
    p4 -> print();

    p1.add(4);


    return 0;
}
