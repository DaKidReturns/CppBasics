#include<iostream>
#include<cstdlib>

using namespace std;

class newClass {

    int a;
    double b;

    public:
    
        newClass(){ // Default constructor
            cout<< "In the default constructor\n";
            a=0;
            b=0;
        }
        
        newClass(int i, double j){ // Paramatrised constructor
            cout<< "In the paramatrised constructor\n";
            a = i;
            b = j;
        }

        
        newClass(const newClass& c1){ // Copy constructor
            /* The use of copy constructors becomes significant when
             * there is a pointer member in the class.
             * You want a copy of the value stored in the location pointed by
             * the pointer not a copy of the adderss itself, which will point to
             * the same location
             * */
            cout<< "In the copy constructor\n";
            a = c1.a;
            b = c1.b;
        }

        int get_a(){ return a; }
        double get_b(){ return b; }

        void set_a(int i) {
            a = i;
        }

        void set_b(double j){
            b = j;
        }

};

int main(){
    newClass c1;
    newClass c2(1,3.4);
    //newClass c_arr[12];  // A default constructor is necessary to do this
    newClass* cptr ; // This will not call any constructor
    newClass* mcptr = (newClass*) calloc(1,sizeof(newClass)); // No constructor is called here
    newClass c3 = c2; // Calls the copy constructor
    newClass c4(c2);

    cout<<"Value of a: "<<c2.get_a()<<endl;
    cout<<"Value of a: "<<c3.get_a()<<endl;
    cout<<"Value of a: "<<c4.get_a()<<endl;


    //*mcptr = newClass(1,3.4);
    //cout<<"Value of a: "<<mcptr->get_a()<<endl;
    
    cptr = new newClass;  // Default constructor will be called
    
    delete cptr;
    free(mcptr);

    return 0;
}
