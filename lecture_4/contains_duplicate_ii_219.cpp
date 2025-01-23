bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n = nums.size();
    if (++k >= n) {
        k = n;
    }

    std::unordered_set<int> us;

    for (int i = 0; i < k; ++i  ) {
        if (us.contains(nums[i])) {
            return true;
        }

        us.insert(nums[i]);
    }

    for (int i = k; i < n; ++i) {
        us.erase(nums[i - k]);
        if (us.count(nums[i])) {
            return true;
        }

        us.insert(nums[i]);
    }

    return false;
}
