#include <vector>

std::vector<int> sortArrayByParityII(std::vector<int>& nums) {
    int i = 0, j = 1;

    while (i < nums.size() && j < nums.size()) {
        if (nums[i] % 2 != 0 && nums[j] % 2 == 0) {
            std::swap(nums[i], nums[j]);
            i += 2;
            j += 2;
        } else {
            if (nums[i] % 2 == 0) {
                i += 2;
            } 
            if (nums[j] % 2 != 0) {
                j += 2;
            }
        }
    }

    return nums;
}
