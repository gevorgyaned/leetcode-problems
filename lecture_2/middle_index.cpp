#include <vector>

int findMiddleIndex(std::vector<int> const &nums) {
    int all = std::accumulate(nums.begin(), nums.end(), 0);

    int left = 0;
    int right = all - nums[0];

    if (left == right) 
        return 0;

    for (int i = 1; i < nums.size(); ++i) {
        left += nums[i - 1];
        right -= nums[i];

        if (left == right) 
            return i;
    } 

    return -1;
}
