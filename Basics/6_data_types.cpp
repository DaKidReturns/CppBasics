#include<iostream>
#include<climits>

/*
 *
    SCHAR_MIN	Minimum value for an object of type signed char	                -127 (-27+1) or less
    SCHAR_MAX	Maximum value for an object of type signed char	                127 (27-1) or greater
    UCHAR_MAX	Maximum value for an object of type unsigned char	            255 (28-1) or greater
    CHAR_MIN	Minimum value for an object of type char	
    CHAR_MAX	Maximum value for an object of type char	
    MB_LEN_MAX	Maximum number of bytes in a multibyte character, for any locale 1 or greater*
    SHRT_MIN	Minimum value for an object of type short int	               -32767 (-2^15+1) or less
    SHRT_MAX	Maximum value for an object of type short int	                32767 (2^15-1) or greater
    USHRT_MAX	Maximum value for an object of type unsigned short int	        65535 (2^16-1) or greater
    INT_MIN	    Minimum value for an object of type int	                        -32767 (-2^15+1) or less
    INT_MAX	    Maximum value for an object of type int	                        32767 (2^15-1) or greater
    UINT_MAX	Maximum value for an object of type unsigned int	            65535 (2^16-1) or greater
    LONG_MIN	Minimum value for an object of type long int	                -2147483647 (-2^31+1) or less
    LONG_MAX	Maximum value for an object of type long int	                2147483647 (2^31-1) or greater
    ULONG_MAX	Maximum value for an object of type unsigned long int	        4294967295 (2^32-1) or greater
    LLONG_MIN	Minimum value for an object of type long long int	            -9223372036854775807 (-2^63+1) or less
    LLONG_MAX	Maximum value for an object of type long long int	            9223372036854775807 (2^63-1) or greater
    ULLONG_MAX	Maximum value for an object of type unsigned long long int	    18446744073709551615 (264-1) or greater
 * */

using namespace std;

enum Example{
    apple, ball, cat, duck, zebra, mountain, fields
};

enum Shopping{
    /* enums can be given predefined values and need not be in order
     * or contain all the values from 0 to n-1, where n is the number of enums
     * */
    tomato = 1,
    //ball = 3, // not allowed it is already defined in Example (you need namespace here)
    carrot = 4,
    rice = 0
}; 


int main(){
    int i=5;
    cout <<"Size of integer datatype: "<< sizeof(int)<<endl;
    cout <<"Max value of integer: " << INT_MAX<< endl;
    cout <<"Min value of integer: " << INT_MIN<< endl;
    cout <<"Max value of long integer: " << LONG_MAX<< endl;
    cout <<"Min value of long integer: " << LONG_MIN<< endl;
    cout << Example::ball<< endl;
    cout << Shopping::tomato<< endl; // output 1

    switch(i){
        case apple: cout<< "You need apple\n";
                    break;
        case ball: cout<< "You need ball\n";
                   break;
        case cat: cout<< "You need a cat\n";
                  break;
        default: cout<<"I dont know what you need\n";
    }

    return 0;
}

