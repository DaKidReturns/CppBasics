#include<iostream>
/*  Union and Structures in c++ are similar to the Union and structures in C.
 *  i.e. while structures have different memeory location for all the different datatypes in them
 *  union share a common memory location for each element
 * */

using namespace std;

struct first{
    int a;
    float b;

    first(int i): a(i){}
    first(float i): b(i){}
    first (int i, float j): a(i), b(j){}
};
union second{
    int a;
    float b;

    second(int i): a(i){} // Yes Union can have constructor
    second(float i): b(i){}
    //second (int i, float j): a(i), b(j){} // this will show an error the compiler check for these
};

int main(){
    first f(2,3.5);
    cout<<f.a<<" "<<f.b<<endl;
    second s(4.5f);
    cout<<s.a<<" "<<s.b<<endl; // s.a will have an ambigus value (well not exactly ambigus...)
    second d(4);
    cout<<d.a<<" "<<d.b<<endl; // d.b will show an ambigus value

    return 0;
}
