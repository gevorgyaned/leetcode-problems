int majorityElement(std::vector<int> const &nums) {
    std::map<int, int> mp;

    int maxidx = 0;

    for (int i = 0; i < nums.size(); ++i) {
        ++mp[nums[i]];

        if (mp[nums[i]] > mp[maxidx]) maxidx = nums[i]; 
    }

    return maxidx;
}
