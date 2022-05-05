#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(),array.end());
	int start=0;
	int end=array.size()-1;
	while(start < end){
			if(array[start]+array[end]==targetSum){
				return {array[start],array[end]};
			}
		else if(array[start]+array[end]<targetSum){
			start++;
		}
		else{
			end--;
		}
		
		
	}
  return {};
}
