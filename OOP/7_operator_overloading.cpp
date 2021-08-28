#include<iostream>

using namespace std;

class Complex{
        double real;
        double img;

    public:
        Complex(double a, double b): real(a), img(b){}
        Complex() : real(0),img(0){}

        Complex operator+(const Complex& c ){  // Need not be const, but recommended
            Complex r;
            r.real = this -> real + c.real;
            r.img =  this ->  img + c.img;
            return r;
        }
        Complex operator-(const Complex& c ){
            Complex r;
            r.real = this -> real - c.real;
            r.img = this -> img - c.img;
            return r;
        }
        bool operator==(const Complex& rhs){
            if(this -> real == rhs.real && this ->img == rhs.img) return 1;
            return 0;
        }


        void show(){
            cout<< real<< "+ i("<<img<<")"<<endl;
        }
};

int main(){
    Complex a(3.14, 2.71);
    Complex b(8.3, 4.3);
    Complex c = a-b;
    a.show();
    b.show();
    c.show();
    if(a==b){
        cout<<"A and B have same value"<<endl;
    }else{
        cout<<"A and B are different"<< endl;
    }

    return 0;
}
