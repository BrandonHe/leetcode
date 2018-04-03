class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        int n = nums.size();
        if (n < 4) return res;
        // Sort to prepare for scanning
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n-3; i++) {
            
            if(i > 0 && nums[i] == nums[i-1]) continue;
            if(nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
            if(nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target) continue;
            
            for (int j = i+1; j < n - 2; j++) {
                if (j > i+1 && nums[j] == nums[j-1]) continue;
                if (nums[j] + nums[j+1] + nums[j+2] > target - nums[i]) break;
                if (nums[j] + nums[n-2] + nums[n-1] < target - nums[i]) continue;
                
                int left = j + 1;
                int right = n - 1;
                while (left < right) {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum < target) left++;
                    else if (sum > target) right--;
                    else {
                        vector<int> quadruplets = {nums[i], nums[j], nums[left], nums[right]};
                        res.push_back(quadruplets);
                        
                        //Avoid the duplicate
                        do {left++;}while (right < left && nums[j+1] == quadruplets[1]);
                        do {right--;}while (right < left && nums[j+2] == quadruplets[2]); 
                    }

                }   
                while ( j < n-2 && nums[j+1] == nums[j]) j++;
                
            }    
            while ( i < n-3 && nums[i+1] == nums[i]) i++;
        }
        return res;
    }
};