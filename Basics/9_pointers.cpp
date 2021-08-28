#include<iostream>

using namespace std;

int main(){
    int* intptr = NULL; // here `intptr` is a pointer to an integer

    //cout<<"Address of the new memory location: "<<intptr<<" value in intptr: "<<*intptr<<endl; // Results in segmentation fault
    
    /* The new keyword creates a memory location and stores an integer with a value of 5*/
    intptr = new int(5);    
    cout<<"Address of the new memory location: "<<intptr<<" value in intptr: "<<*intptr<<endl;

    delete intptr; // deletes the memory location (i.e. marks it useable )

    //*intptr = 45; // will not result in segmetation fault

    /*intptr is a dangling pointer. so a safe way is to 
     * do this after delete 
     * intptr = NULL;
     */
    cout<<"Address of the new memory location: "<<intptr<<" value in intptr: "<<*intptr<<endl;

    // Creating a dynamic array using pointer
    int size = 10;
    int *arr_ptr = new int[size];

    cout<<"Address of the first array element location: "<<arr_ptr<<" value in arr_ptr: "<<*arr_ptr<<endl;

    for(int i=0; i<size; i++){
        //*(arr_ptr + i) = ((int)(arr_ptr+i) ^ (int)(arr_ptr+i)>>2) % 100;  // Assigned some random values to the memory location
        *(arr_ptr + i) = i + 67; // Assign values to the memory location
        cout<< "Value in : " << arr_ptr + i << " = "<<arr_ptr[i]<<endl;
    }
    delete []arr_ptr;


    return 0;
}
