#include<iostream>
using namespace std;
void pointer(int * pointer){ //this is what we mean by when we do a call by reference
    *pointer=*pointer+1;


}
int main(){
    cout <<"pointers"<<endl;
    int a=10;
    cout<<"printing address"<<endl;
    cout <<&a<<endl;

    //creating a pointer
    //syntax of a pointer is 
    //datatype to which pointer is pointing to * pointer name
    //we can store addresses in pointers
    //& means address of operator
    int *p=&a;//this step is called as initializing a pointer variable
    //when do call by reference that is when we pass the address of a pointer in the function   then the original value is changed 
    //we do not create a copy
    //we are accessing the original variable only
    int c=10;
    int *b=&c;
    pointer(b);

    cout<<c<<endl;
    //cout<<sizeof(p)<<endl;//
    int array[3]={0,1,2};
    cout <<array;//gives the address of the start of the array
    //
    return 0;
}
