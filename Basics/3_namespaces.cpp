#include <iostream>

/* These namespaces can be declared inside any function / class and need not be global
 * */

namespace calculator{
    int add(int a, int b){
        return a+b ;
    }
    int sub(int a, int b){
        return a-b;
    }
}

int multiply(int a, int b){
    using namespace calculator; 
    /* The using keyword brings the variables and functions in the 
     * calculator namespace to scope of this function. 
     */
    std::cout<< "In the multiply function\n";
    int res = 0;
    for(int i=0; i<b; i++){
        res = add(res,a);
    }
    return res;
}
int divide(int a, int b){
    using namespace calculator;
    if(b == 0) return -1;
    int divident = a;
    int quotient = 0;
    while(divident > 0){
        sub(divident, b);     
    }
}
/* No conflict in defining a second add fucntion because the first one is in the calculator namespace
 */
int add(int a, int b){ 
    // Here cout is in the std namspace
    std::cout<<
}

int main(){
    using namespace std;

    int i=5, j=7;

    cout<<calculator::add(i,j)<<'\n';
    cout << multiply(i,j)<<'\n';
    cout << divide(i,j)<<'\n';
    return 0;
}
