int lengthOfLongestSubstring(string s) {
    int mp[127] = {0};
    int res = 0;
    int start = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (mp[s[i]] > start) {
            start = mp[s[i]];
        }
        mp[s[i]] = i + 1;
        res = std::max(res, i - start + 1);
    }

    return res;
}
