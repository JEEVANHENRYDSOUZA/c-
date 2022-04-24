#include<iostream>
using namespace  std;
void complement(int a){
        int ans;
        int mask=0;
        while(mask < a){

            mask=(mask << 1)|1;//the ibuilt  complement operator does 2's complement hence we will get wrong answer if we directly print it hence create a mask to do so
        }
        ans=(~a) & mask;
        cout << "the value in decimal is"<<endl;
        cout<< ans<<endl;


    }
int main(){
   
    int number;
    cout<<"enter the number whose complement do you want to find in decimal format"<<endl;
    cin >> number;
    complement(number);

 
    return 0;
} 

