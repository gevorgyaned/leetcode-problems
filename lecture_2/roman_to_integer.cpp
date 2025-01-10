int romanToInt(std::string s) {
    int n = s.size();
    std::unordered_map<char, int> syms = { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000} };
    int res = 0;

    int prev = 0;
    for (int i = n - 1; i >= 0; --i) {
        int add = syms[s[i]];
        if (prev > add) {
            res -= add;
        } else {
            res += add;
        }
        prev = add;
    }

    return res;
}
