// Original Solution from Brandon
/*
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        stack<uint32_t > binBits;
        while (n) do{
            binBits.push(n % 2);
            n /= 2;
        }
        uint32_t reverseSum = 0;
        while(!binBits.empty()) {
            reverseSum += binBits.top() * pow(2, binBits.size()-1);
            binBits.pop()
        }
        return reverseSum;
    }
};
*/


// Solution from Discussion:
class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t ans = 0;
		int offset = 1;
		while (n) {
			int res = n % 2;
			if (res) ans += pow(2, 32-offset);
			offset++;
			n /=2;
		}
		return ans;
	}
};

// Solution from Discussion:
class Solution {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t m = 0;
		for (int i = 0; i < 32; i++) {
			m <<= 1;
			m |= n & 1;
			n >>= 1;
		}
		return m;
	}
};