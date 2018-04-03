class Solution {
	public int reverse(int x) {
		int res = 0;
		while (x != 0) {
			int tail = x % 10;
			int resTemp= res * 10 + tail;

			// if overflow, the result will be different from original value
			if ((resTemp - tail) /10  != res) return 0;
			res = resTemp;
			x /= 10;
		}

		return res;

	}
}