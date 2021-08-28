#include<iostream>
#include<fstream>
using namespace std;

int 
main(){
    int i =0;
    string str;
    char ch[1000];
    fstream n;//("file.txt",n.in|n.out);
    n.open("test.txt",ios::in|ios::out|ios::trunc);
    if(n.is_open()){
        n << "This is file\n";
        n.seekp(0);
        n.seekp(sizeof(char));// skip a character
        if(n.tellp() == n.tellg()){
            cout<<"They are the same pointer\n";
        }
        n.seekp(n.tellp()+(long int)sizeof(char)*2);
        n<<"does this line exist\n";
        n.seekp(0);
        int c;
        while(c = n.get(), !n.eof()){
            cout << (char)c;
        }
        cout<<endl;
    }
    cerr << "\nError no:" << ++i ;
    cout << i+1;
    //cout << ch ;
    cerr << "This is standard error\n";
    clog << "This is used for logging\n";

    return 0;
}
