int longestPalindrome(string s) {
    std::vector<int> map(127, 0);

    for (const auto& c: s) {
        ++map[c];
    }

    int evens = 0;
    int longest_odd = 0;

    for (int l: map) {
        if (l % 2 == 0) {
            evens += l;
        } else {    
            if (longest_odd < l)
                longest_odd = l;

            evens += l - 1;
        }
    } 

    if (longest_odd <= 1) {
        return evens + longest_odd;
    } else {
        return evens + 1;
    }
}
