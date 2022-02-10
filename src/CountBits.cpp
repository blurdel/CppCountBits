#include <iostream>


// 1011 >> 1
// 0101 >> 1
// 0010 >> 1
// 0001 >> 1
// 0000
int countBits(long val)
{
	int count = 0;
	int bits = sizeof(val) * 8;

	for (int i = 0; i < bits; i++) {

		if ((val & 1) == 1) {
			count++;
		}
		val >>= 1; // Shift right, dont lose hi-bits

		if (val == 0) {
			break;
		}
	}
	return count;
}

int main()
{
	int cnt = 0;
	for (int i = 0; i < 16; i++) {
		cnt = countBits(i);
		std::cout << i << " has " << cnt << " hi-bits" << std::endl;
	}
	return 0;
}
