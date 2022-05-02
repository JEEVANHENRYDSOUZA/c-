#include<iostream>
using namespace std;

void linear(int array[],int target,int size){
    for(int i=0;i<=size-1;i++){
        if (array[i]==target){
            cout << "match found linear search accomplished" <<endl; 
            return;
        }
    }
        cout <<"match not found linear search not accomplished" <<endl; 
        return ;
    

}
int main (){
    int target =9;
    int size=10;
    int array[10]={1,2,3,4,5,6,7,8,9};
    linear(array,target,size);


    return 0;
}




//time complexity is o(n) because in worst case the target element will not be found in the array but we will have to visit all the elements in the array
