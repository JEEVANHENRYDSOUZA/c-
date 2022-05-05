#include<iostream>
using namespace std;



static int kadane(int Array[], int n) {
  int max_sum = 0;
  int current_sum = 0;

  for(int i=0; i<n; i++) {
    current_sum = current_sum + Array[i];
    
    if (current_sum < 0)
      current_sum = 0;
    
    if(max_sum < current_sum)
      max_sum = current_sum;
  }
  return max_sum;
}




int main (){
    int size=9;
    int array[9]={-3, 1, -8, 12, 0, -3, 5, -9, 4};
    cout << kadane(array,size)<< endl;



    return 0;
}
