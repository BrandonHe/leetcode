public void moveZeroes(int[] nums) {
	if (nums == null || nums.length == 0) return;
	int lastNonZeroFoundAt = 0;
	for(int num : nums) {
		if (num != 0) nums[lastNonZeroFoundAt++] = num;
	}

	while (lastNonZeroFoundAt < nums.length){
		nums[lastNonZeroFoundAt++] = 0;
	}
}