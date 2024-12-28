#include <vector>

int lower_bound(std::vector<int> const& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;

	while (left < right) {
		int mid = left + (right - left) / 2;

		if (nums[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}

	return left;
}

