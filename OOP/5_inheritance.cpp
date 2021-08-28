#include<iostream>

using namespace std;

class Base{
    private:
        int a;
        char s;
    protected:
        void show(){
            cout<<"Value of base class variables:"<<endl;
            cout<<"a: "<<a<<endl;
            cout<<"s: "<<s<<endl;
        }
    public:
        Base(): a(0), s(0){}
        Base(int i, char j) : a(i), s(j){}

        void show(int i){
            this->show();
            cout<<i<<" public funciton \n";
        }
};

class Derived : private Base{
    private:
        const char *name;
        int a;

    public:
        Derived(const char *n){
            name =n;
            Base();
            a=0;
        }
        void show(){
            Base::show();
            cout<<"Name: "<< name <<endl;
        }

};


int main(){
    Base b1(4, '3');
    //b1.show();// Not possible
    b1.show(4); // possible
    Derived d1 ("Person");
    d1.show();

    return 0;
}
