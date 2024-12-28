#include <vector>

void bubble_sort(std::vector<int>& nums)
{
	for (int i = 0; i < nums.size() - 1; ++i) {
		bool swapped = false;

		for (int j = 0; j < nums.size() - i - 1; ++j) {
			if (nums[j] > nums[j + 1]) {
				std::swap(nums[j], nums[j + 1]);
				swapped = true;
			}
		}

		if (!swapped) {
			break;
		}
	}
}

void insertion_sort(std::vector<int>& nums)
{
	for (int i = 1; i < nums.size(); ++i) {
		int key = nums[i];
		int j = i - 1;

		while (j >= 0 && nums[j] > key) {
			nums[j + 1] = nums[j];
			--j;
		}

		nums[j + 1] = key;
	}
}

void selection_sort(std::vector<int>& nums)
{
	for (int i = 0; i < nums.size(); ++i) {
		int min_index = i;

		for (int j = i + 1; j < nums.size(); ++j) {
			if (nums[min_index] > nums[j]) {
				min_index = j;
			}
		}

		if (i != min_index)
			std::swap(nums[min_index], nums[i]);
	}
}
