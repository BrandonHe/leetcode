/***
 *Author: Zhaoqiang
 *From Discussion
 *[O(n) time and O(1) space solution with explanation](https://leetcode.com/problems/product-of-array-except-self/discuss/65627/O(n)-time-and-O(1)-space-C++-solution-with-explanation) 
*/
class Solution{
public:
	vector<int> productExceptSelf(vector<int> nums) {
		int N = nums.size();
		vector<int> fromBegin(N);
		fromBegin[0] = 1;
		vector<int> fromLast(N);
		fromLast[0] = 1;

		for (int i=1; i<n; i++) {
			fromBegin[i] = fromBegin[i-1]*nums[i-1];
			fromLast[i] = fromLast[i-1]*nums[n-i];
		}

		vector<int> res(n);
		for (int i = 0; i < n; i++) {
			res[i] = fromBegin[i] * fromLast[n-1-i];
		}

		return res;
	}
};

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans = {0};
        int multi = 0;
        for (int i = 0; i < nums.size(); ++i) {
            multi *= nums[i]; 
        }
        
        for (int i = 0; i < nums.size(); ++i) {
            if (0 == nums[i]) {
                ans[i] = 0;
            } else 
                ans[i] = multi / nums[i];
        }
        
        return ans;
    }
};
*/