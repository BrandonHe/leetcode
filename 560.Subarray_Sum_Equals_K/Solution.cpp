#include<algorithm>

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //unordered_map<int, int> hash;
        int total = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                int sum = 0;
                for (int index = i; index < j; index++)
                    sum += nums[index];
                    if(sum == k)
                        total += 1;
            }       
        }
        
        return total;
    }
};