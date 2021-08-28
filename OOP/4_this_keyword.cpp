#include<iostream>
/*
 * This pointer references the object that calls the particular function
 * */

using namespace std;

class example{
    int* n1;
    double d1;

    public:
        example();

        example(int, double);

        example(const example&);

        void set_n1(int);

        void set_d1(double d1){
            this -> d1 = d1;
        }

        void show(){
            cout<<"d1: "<<this->d1<<" n1: "<<*(this-> n1)<< endl;
        }
};

int main(){
    example e1;
    example e2(45, 67.32);
    e2.show();
    e1.show();
    return 0;
}

/* Remember, general syntax for defining a fucntion
 * return_type function_name (arguments){
 *      // body
 * }
 *
 * */

example::example(){
    /* example::example is the function name since the constructor is in the class scope
     * */
    this -> set_n1(0);
    this->set_d1(0.0);
}
example::example(int n1, double d1){
    this->set_n1(n1);
    this->set_d1(d1);
}

example::example(const example &e1){
    this->set_n1(*(e1.n1));
    this->set_d1(e1.d1);
}

void example::set_n1(int n1){
    if(this->n1 == NULL){
        this ->n1 = new int;
    }
    *(this -> n1) = n1;
}

