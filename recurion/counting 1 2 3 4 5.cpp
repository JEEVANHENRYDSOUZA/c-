#include<iostream>
using namespace std;
void count(int value){
    if(value<1){return;}
     count(value-1);
    cout<<value;
   

}
int main(){
    cout<<"recursion sucks"<<endl;
    //recursion is when function calls itself
    //this is recursion
    //breaking down bigger problems into similar type of smaller problems then use recursion
    //example 5! can also be written as 5*4!
    //another example is 2^10 can be written as 2*2^9
    //so try for recursion when we can break down larger problems smaller problems of similar type
    //things which are mandatory in recursion
    //1.base case
    //2.recursive call
    //what is base case?----->implies where to stop or terminating condition as well
    //types of recursion
    //1.head recursion----->recursive call at the start
    //2.tail recursion---->recursive call is made at the end
    //not required to know just for info
    //example 1. of recursion-->factorial printing
    int n;
    cin>>n; 
    count(n);


    return 0;
}
