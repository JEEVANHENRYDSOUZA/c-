using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int arridx=0;
	int seqidx=0;
	while(arridx<array.size()&& seqidx< array.size()){
		
		if(array[arridx]==sequence[seqidx]){
			seqidx++;
		}
		arridx++;
	}
  return seqidx==sequence.size();//when i will have found out all the elements in the array of the sequence then sequencc
}//then we will be at the last index of the sequence array
