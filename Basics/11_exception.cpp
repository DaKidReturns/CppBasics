#include <iostream>
#include <exception>
using namespace std;

struct myexception: public exception{
    virtual const char* what() const throw(){
        return "My exception happened";
    }
} myex;

int main () {
    try{
        throw myex;
    }
    catch (exception& e){
        cout << e.what() << '\n';
    }
    return 0;
}