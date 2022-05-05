#include<iostream>
using namespace std;



bool twoPairSum(int array[],int target,int size){
    int start=0;
    int end=size-1;
    while(start< end){
        if(array[start]+array[end]==target){

            cout << array[start] << array[end]<<endl;
            return true;
        }
        else if(array[start]+array[end]<target){
            start++;

        }
        else{

            end--;
        }


    }


 cout << "no match found "<< endl;
 return false;

}



int main (){
    int target=9;
   int array[4]={2,7,11,15};
   int size=4;
    twoPairSum(array,target,size);



    return 0;
}
