#include <iostream>
#include <vector>
#include <unordered_map>

std::pair<int, int> two_sum(std::vector<int> const& nums, int target)
{
	std::unordered_map<int, int> mp;

	for (int i = 0; i < nums.size(); ++i) {
		if (mp.count(target - nums[i])) {
			return { i, mp[nums[i] };
		}

		mp.insert({ nums[i], i });
	}

	return { -1, -1 };
}
