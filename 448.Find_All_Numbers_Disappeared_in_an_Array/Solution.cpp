// Original Solution from Brandon
// Submitted with Time Limite Exceeded
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i = 1; i <= nums.size(); ++i){
            auto result = find(begin(nums), end(nums), i);
            if (result == end(nums))
                ans.push_back(i);
        }
        
        return ans;
    }
};

// Best Solution from Discussion forums
/******原理解释*****
 
 这里的原理是：入参数组中元素取值范围是 1~n, -1后取值范围 0～（n-1）；
 数组元素遍历检索时是 i 也是 0～n-1;
 所以入参数组中元素值 -1 可以作为 遍历 该数组的 参数 i
 
 举例说明：
 1. 入参数组nums =【3，2，8，6，1，2，5，3】
 (8个元素，最大值为8，数组查找范围： 1 ～ 8， 检索范围 0～7)

 2. 数组中元素值都 -1 变为【2，1，7，5，0，1，4，2】 
（ 取值范围正好都在 0～7，可以作为取反时的检索值，缺（3，6），）

 3. 依次将第2步中新的元素值所在的原数组值 变为 负数，第（3，6）的值不会 取反
 	
 	3.1 开始 第一遍 遍历
		iter = 0, 将 nums[2] 取反，数组变为【3，2，-8，6，1，2，5，3】
		iter = 1, 将 nums[1] 取反，数组变为【3，-2，-8，6，1，2，5，3】
		iter = 2，将 nums[7] 取反，数组变为【3，-2，-8，6，1，2，5，-3】
		iter = 3, 将 nums[5] 取反，数组变为【3，-2，-8，6，1，-2，5，-3】
		 ...
		 ...
		 ...
		iter = 7, 将nums[2] 取反，数组变为【-3，-2，-8，6，-1，-2，5，-3】
		
		Note：
		已经在iter = 0时 取反了原数组中的值，如果这里iter = 7直接再取反就会变为正数，
		所以需要加 绝对值 后再取反

	3.2 开始 第二遍 遍历
		找到第一遍 遍历后数组中 > 0 的值：
		nums[3] = 6, nums[6] = 5
 		
 		表示3，6 没有在第二步的数组【2，1，7，5，0，1，4，2】中（符合第二步推算）
 	
 4. 由于 我们再第二步中对元素值都 -1，
 		所以 这里我们需要 +1， 即就是 原数组 中的缺失的数为

 	【4，7】

 *****End原理解释******/
class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> ans;
		for (int i = 0; i < nums.size(); ++i) {
			int val = abs(nums[i]) - 1;
			if (nums[val] > 0) {
				nums[val] = -nums[val];
			}
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > 0)
				ans.push_back[i+1];
		}

		return ans;
	}
};