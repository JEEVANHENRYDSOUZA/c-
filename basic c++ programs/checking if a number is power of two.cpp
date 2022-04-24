// when a number is apower of two if it is converted in its binary form the output will always contain a single one ,that location of one may vary
//exampl 2^1==> in binary form is 010
//example 2^2==> in binary form is 100 and so on


//so just count the number of ones in its binary representation

#include<iostream>
using namespace  std;
void power_of_two(int a){
    int count=0;
    while(a!=0)
        {
            if(a&1){
                count++;
                cout << count <<endl;
            }

            a=a>>1;
        }
    if(count==1)
    {
        cout <<"it is a power of two"<< endl;
    }
    else{

        cout <<"it is not a power of two"<<endl;
    }



}
int main(){
    int number;
    cout<<"enter a the number which you want to check if it is a power of two or not " << endl;
    cin >> number;
    power_of_two(number);

    return 0;
} 

