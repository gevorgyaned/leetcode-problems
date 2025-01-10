#include <vector>

int findGCD(vector<int>& nums) {
    auto &&[min, max] = std::minmax_element(nums.begin(), nums.end());

    for (int i = *min; i > 0; --i) {
        if (*min % i == 0 && *max % i == 0) 
            return i;
    }

    return 1;
}

