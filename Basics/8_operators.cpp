#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

bool get_bool(bool b){
    cout<<"inside get bool\n"; 
    return b;
}

int main(){
    /* +, -, /, * operators work similarly like almost all other programing language
     * */
    //time_t time;
    srand(time(NULL)); // initialize random number generator with a random seed 
    
    // rand() funtion will generate a number from 0 - RAND_MAX
    int i = rand()%100; // Modulo operation (gives result from 0-99)
    int j = rand()%100;
    cout<<"i: "<<i<<" j: "<<j<<endl;

    if(i>j && i>5){
        cout<<"i is greater than j and i is greater than five\n";
    }else{
        cout<<"In the else\n";
    }

    //Short Circuting
    get_bool(false) && get_bool(true); // 'get_bool function will be executed once'
    get_bool(true) || get_bool(false);
    
    // Tertiary operator
    int c = i>j? i : j; // c will have the greater from a and b
    cout<< "i: "<< i <<" j: "<< j << " c: "<< c<< endl;

    //Comma operator
    int p = (c++, c+1,cout<<"Hello there\n", c+4); // all the statements seperated by the comma will be executed and
                             // the final value of the statement will be the last statement
    cout<<"p: "<<p<<" c: "<<c<<endl;

    // Bitwise, &,|,^
    if(c&1) { // using bitwise and
        cout<< "number "<<c<<" is even\n";
    }
    else{
        cout<< "number "<<c<<" is odd\n";
    }
    // Bit shift operators
    int g = 3;
    int d = g<<1; // multiply by 2^1
    int e = g<<3; // multiply by 2^3 or 8
    int f = g>>1; // divide by 2^1
    int h = g>>3; // divide by 2^3

    return 0;
}
