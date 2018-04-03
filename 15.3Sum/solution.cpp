class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {

		// Sort for iteration 
		// 排序为后续遍历做准备
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;

		// Begin for scanning the vector
		// 开始遍历向量
		for (int i = 0; i < nums.size(); i++) {

			// if the element value > 0, then break this iteration 
			// 检查结果如果>0, 直接结束这次遍历
			if (nums[i] > 0)
				break;

			// if the element value < 0, then the last two element
			// value sum should be negative, that‘s a target what we search out
			// 如果结果<0, 则后面两个元素值的和肯定为负数, 这是我们需要寻找的 目标
			int target = -nums[i];
			int front = i + 1, back = nums.size() - 1;

			// Begin to search the last two element out
			while (front < back) {
				int sum = nums[front] + nums[back];

				if (sum < target) {
					front++;
				} else if (sum > target) {
					back--;
				} else {
                    
                    // The whole sum is 0
                    // 找到符合要求的数据集
					vector<int> triple{nums[i], nums[front], nums[back]};
					res.push_back(triple);
                    
                    // Process the duplicate of 2 element
					// 跳过第二个元素中的重复元素
					while (front < back && nums[front] == triple[1]) {
						front++;
                    }
					// Process the duplicate of 3 element
					// 跳过第三个元素中的重复元素
					while (front < back && nums[back] == triple[2]) {
						back--;
					}
				}

			}

			// Process the duplicate of 1 element
			// 跳过第一个元素的重复元素
			while (i < nums.size() && nums[i+1] == nums[i]) {
				i++;
			}
		}

		return res;
	}

};