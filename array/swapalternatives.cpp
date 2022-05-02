#include<iostream>
using namespace std;
void swapalternate(int array[],int size){
    for(int i=0;i+1<=size-1;i+=2){

        swap(array[i],array[i+1]);
    }



}


int main(){
    int size=10;
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    swapalternate(array,size);
    for(int i=0;i<=size-1;i++){
        cout << array[i];
    }



}
