#include <iostream>
using namespace std;

// Given an array of non-negative integers, you are initially positioned at the first index. Each element in array represesnts your maximum jump length at that posiiton. 
// Determine if you can reach the last index

// say we have [0,1] with size 2, we know that we cant jump to last index unless nums[0] >= 1
// for size 3 => [2,0,1] if nums[0] >= size then yes we can jump but if it is equal to 1, we are back to case 1
// say we have [1,1,1] this is true 

bool canJump(int *nums, int numSize){
	if (numSize == 2){
		if (nums[0] >= 1){ return true;}
		else {return false;}
	}
	else if (numSize == 1 || numSize == 0){
		return true;}
	bool istrue = false;
	for (int i = 1; i <= nums[0]; i++){
		if (nums[0]>=numSize){
			return true;
		}
		istrue = canJump(nums+i, numSize - i);
		if (istrue){return true;}  
	}
	return istrue;
}

int main(){
	int nums[] = {1,0,1};
	int numSize =  sizeof(nums)/sizeof(nums[0]);
	bool istrue = canJump(nums, numSize);
	cout<<"The array is:"<<endl;
	cout<<"[";
	for (int i = 0; i<numSize; i++){
		cout<<" "<<nums[i]<<" ";
	}
	cout <<"]"<<endl;
	cout<<"And the answer is: "<<boolalpha<<istrue<<endl;
	return 0;
}
