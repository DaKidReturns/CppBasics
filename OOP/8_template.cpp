#include<iostream>

using namespace std;

template <typename T>
class A{
    private:
        T val;
    public:
        void setVal(const T& e){
            val = e;
        }
        void show(){
            cout<< val <<endl;
        }
};

int main(){
    A<int> a;
    a.setVal(5);
    a.show();

    A<double> b;
    b.setVal(345.23);
    b.show();
    return 0;
}
