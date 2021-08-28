#include<iostream>
#include<cstdlib>

class example{
    int* a;
    double c;

    public:
        example(){
            a = new int(0); 
            // create a new memory location and store the value 0 in it 
            // and store the address of that location in a
            c = 0;
        }
        example(int i, double j){
            a = new int(i);
            c = j;
        }

        ~example(){ // Destructor
            std::cout<<"Destructing the object"<<std::endl;
            delete a;
        }

        int    get_a() { return *a; }
        double get_c() { return  c; }

        void set_a(int j){
            if(a != NULL){
                *a=j;
            }
        }

        void set_c(double j){
            c = j;
        }
};

int main(){
    example  e1(4, 5.87);
    example *e2 = new example(3,6);

    std::cout<< "Value of a in e1: "<<e1.get_a()<< std::endl;
    std::cout<< "Value of a in e2: "<<e2->get_a()<< std::endl;
    
    delete e2;  // Calls the destructor
    //free(e2); // Doesnt call the destructor
    
    return 0;

}
