#include<iostream>
using namespace std;



bool threePairSum(int array[],int target,int size){
        for(int i=0;i<size-2;i++){

            int start=i+1;
            int end=size-1;
            while(start < end){

                if(array[i]+array[start]+array[end]==target){
                    cout << array[i]<<array[start]<<array[end]<<endl;
                    return true;
                }
                else if(array[i]+array[start]+array[end]<target){
                    start++;
                }
                else{
                    end--;
                }


            }




        }
            return false;


}



int main (){
    int target=9;
   int array[5]=  {1, 2, 3, 4, 5};
   int size=5;
    threePairSum(array,target,size);



    return 0;
}
