class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		for (int cur = 0, lastNonZeroFoundAt = 0; i < nums.size(); ++i) {
			if (0 != nums[cur]) {
				// no exchange if nums[cur] != 0 until nums[cur] ==0
				swap(nums[lastNonZeroFoundAt++], nums[cur]);
			}
		}
	}
}

// Solution 2
void moveZeroes(vector<int>& nums) {
	int lastNonZeroFoundAt = 0;
	// If the current element is not 0, then we need to 
	// append it just in front of last non 0 element we found
	for (int i = 0; i < nums.size(); ++i) {
		if (0 != nums[i]) {
			nums[lastNonZeroFoundAt++] = nums[i];
		}
	}
	// After we have finished processing new elements,
	// all the non-zero elements are already at beginning of array.
	// We just need to fill remaining array with 0's
	for (int i = lastNonZeroFoundAt; i < nums.size(); ++i){
		nums[i] = 0;
	}
}