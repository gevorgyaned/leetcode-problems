#include <ranges>

class Solution {
public:
    int firstUniqChar(string s) {
        std::unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); ++i) {
            if (mp.find(s[i]) == mp.end()) {
                mp.insert({s[i], i});
            } else {
                mp[s[i]] = -1;
            }
        }

        auto &&range = mp
            | std::views::elements<1>
            | std::views::filter([](int count) { return count != -1; });

        return range.empty() ? -1 : std::ranges::min(range);
    }
};
