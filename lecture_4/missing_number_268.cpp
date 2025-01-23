int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = (n + 1) * n / 2;
    return sum - std::accumulate(nums.begin(), nums.end(), 0);
}
