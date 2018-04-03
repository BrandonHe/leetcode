public List<Integer> findDisappearedNumbers(int[] nums) {
	List<Integer> ans = new ArrayList<Integer>();
	N = nums.length;

	for(int i = 0; i < N; ++i) {
	  int val = abs(nums[i]) - 1;
	  if (nums[val] > 0) {
	  	nums[val] = -num[val];
	  }

	  for (int i = 0; i < N; ++i) {
	  	if (nums[i] > 0) {
	  		ans.add(i+1);
	  	}
	  }

	  return ans;

	}
}