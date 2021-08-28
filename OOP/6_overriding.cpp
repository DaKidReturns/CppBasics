#include<iostream>

using namespace std;

class Base{
    private:
        int X,Y;
    protected:
        void set_X(int i) { X = i;}
        void set_Y(int i) { Y = i;}
        int get_X() { return X; }
        int get_Y() { return Y; }
        
    public:
        Base(): X(0),Y(0){
            cout<<"Base Class Default Constructor\n";
        }
        Base(int a, int b) : X(a), Y(b){
            cout<<"Base Class Constructor\n";
        }

        ~Base(){
            cout<<"Base Class Destructor\n";
        }
        void show(){
            cout<<"Base Object at: X:"<<X<<" Y:"<<Y<<endl;
        }
};

class Derived : protected Base{
    public:
        void moveX(int i){
            set_X(get_X()+i);
        }
        void moveY(int i){
            set_Y(get_Y()+i);
        }
        void show(){  // Overriding the base class show fucntion
            //Base::show();
            cout<<"Object at X: "<<get_X()<<" and Y: "<< get_Y()<< endl;
        }
        Derived(): Base(0,0){
            cout<<"Derived Class default constructor\n";
        }
        Derived(int a, int b): Base(a,b){
            cout<<"Derived class parametrised constructor\n";
        }
        ~Derived(){
            cout<<"Derived Class Destructor\n";
        }
};


int main(){
    Derived d1(5,6);
    //d1.Base::show(); // This will cause an error if Base is inherited as private or protected
    d1.show();
    return 0;
}
