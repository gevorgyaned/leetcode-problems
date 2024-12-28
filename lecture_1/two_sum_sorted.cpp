#include <vector>

std::pair<int, int> two_sum_sorted(std::vector<int> const& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;

	while (left < right) {
		int sum = nums[left] + nums[right];

		if (sum == target) {
			return { left, right };
		}
		else if (sum > target) {
			--right;
		}
		else {
			++left;
		}
	}

	return { -1, -1 };
}