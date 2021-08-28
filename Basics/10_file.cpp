#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream n;    // Start a file stream   
    //fstream n("file.txt",n.in|n.out);  // Using the fstream constructor
    n.open("test.txt",ios::in|ios::out|ios::trunc);

    if(n.is_open()){
        n << "This is file\n";  //  
        n.seekp(0);             // Move to the begining of the file
        n.seekp(sizeof(char));  // skip a character
        if(n.tellp() == n.tellg()){
            cout<<"They are the same pointer\n";        // the put pointer and the get pointer are the same for the file stream
        }
        n.seekp(n.tellp()+(long int)sizeof(char)*2);  // n.tell()p is of long int type and sizeof returns size_t so a type conversion is needed
        n<<"does this line exist\n";
        n<<"Hello there\n";
        n.seekp(0);
        int c;
        while(c = n.get(), !n.eof()){       // Due to the comma operator the right most statement will be the final value of the statement
            cout << (char)c;        // Put the charecter read to the std ouput
        }
        cout<<endl;
    }
    n.close();   // Dont forget to close the file

    return 0;
}
