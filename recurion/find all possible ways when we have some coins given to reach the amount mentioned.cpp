#include<iostream>
using namespace std;

int solve(int array[],int size,int amount,int index ){

    if(amount==0){return 1;}
    if(amount<0){return 0;}
    int ways=0;
    for(int i=index;i<size;i++){
        ways+=solve(array,size,amount-array[i],i);
    }
    return ways;

}


int main(){

    cout<<"hi"<<endl;
    int array[]={1,2};
    int ans=solve(array,2,4,0);
    cout<<ans<<endl;



    return 0;
}
