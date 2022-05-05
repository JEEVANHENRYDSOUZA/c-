#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(),array.end());
	vector<vector<int>>triplets;
	for(int i=0;i<array.size()-2;i++){
		int start=i+1;
		int end=array.size()-1;
		while(start<end){
			
			if(array[i]+array[start]+array[end]==targetSum){
				triplets.push_back({array[i],array[start],array[end]});
				start++;
				end--;
			}
			else if(array[i]+array[start]+array[end]<targetSum){
				start++;
			}
			else{
				end--;
			}
		}
		
		
	}
  return triplets;
}
