#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;//remeber a should evaluate to a value always to use it in switch case

    switch(a){
        case 1: cout <<"number is one"<<endl;
                //break;//if break not written all statements written below it are executed irrespective of the value of a
                
        default: cout <<"this is default case";
                    
        
        
    }
    
    
    return -1;
}
