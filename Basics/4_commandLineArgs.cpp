#include<iostream>

using namespace std;

int main(int argn, char* argv[]){
    cout<<"Number of command line arguments passed= "<<argn<<endl;
    if(argn>0){  // this is always true.

        // The first argument will always be the name of the binary executable / the shortcut to it.

        for(int i=0; i<argn; i++){
            cout<<"Argument "<<i << " : "<<argv[i]<<"\n";
        }
        cout<< endl;

        // This will not work snince range is not work since compiler doesn't 
        // know how long argv is at compile time
        /*
        for(auto i:argv){  
            cout<<"Argument "<<i;
        }*/
    }

    return 0;
}
