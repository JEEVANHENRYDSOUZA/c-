#include<iostream>
# define PI 3.14//defining a macro
using namespace  std;
int main(){

    int i=10;
    int& j=i;//this is creating  a reference variable here both i and j are pointing to the same thing
    cout<<j<<endl;//this will print---->10,will be used for pass by reference-
    //question here is if we have pointer variable then what is the need for reference variable
    //answer for  this is in reference we need no do the dereferencing separately
    //static memory ----stack
    //dynamic memory---heap
    //statice memory allocation
    int p =10;
    //dynamic memory allocation
    int * ptr=new int ;
    //here ptr will be stored in the stack
    //creating a dynamic array 
    int n ;
    cin >> n;
    int * arr =new int[n]; // initializing one dimensional array

    // when write while(true){int p=10;}--->here the memory is limited to the scope of the variable in static variable
    //void * is called s generic pointer
    int ** array =new int *[n];
    for (int o=0;o<n;o++){
        array[o]= new int[n];// dynamic allocation for a 2-d array
    }

    return 0;
}
