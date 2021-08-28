#include<iostream>

using namespace std;


int main(){
    
    string s;
    /*
    cin >> s;
    cout << endl <<s; // If the input has some white spaces, string till the white space will be read the rest will be avoided
    */

    char ch[1000];
    int c;
    int i=0;
    char delim = '\n';
    while((c = cin.get()) != delim){
        s.push_back((char)c);
        ch[i++] = (char)c;
    }
    s.push_back('\0');
    ch [i]= '\0';
    cout << "String s: "<< s<< endl;
    cout<<"Char ch[1000]: "<< ch<< endl;
    return 0;
}
