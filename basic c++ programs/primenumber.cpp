//we can go for half input size as well but it will not effect the time complexity

#include<iostream>
using namespace std;

void prime(int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count++;
        }
    }

    if(count>2){
        cout <<"not a prime number"<<endl;
    }
    else{
        cout<<"it is a prime number"<<endl;
    }


}
int main(){
    cout<<"basic maths for dsa"<<endl;

    cout<<"prime number"<<endl;
    int n;
    cin>>n;
    prime(n);
    return 0;
}
