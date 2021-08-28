#include<iostream>

using namespace std;
class class_name{
    private:
        int a;
        int y;
    public: 
        bool set_a(int i){
            if(i>=18){
                a = i;
                return true;
            }
            return false;
        }
        void set_y(int i){
            y = i;
        }

        int get_a(){
            return a;
        }
        int get_y(){
            return y;
        }
};


int main(){
    class_name cn;
    if(cn.set_a(4)){
        cout<< "Welcome Aboard\n";
    }else{
        cout<<"You dont meet the requiremets\n";
    }
    cn.set_y(46);
    cout <<"Value of a : "<<cn.get_a()<<endl;
    cout <<"Value of y : "<<cn.get_y()<<endl;
    
    return 0;

}
