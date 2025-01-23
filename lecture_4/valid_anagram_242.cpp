bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    int freqs[27] = {0};

    for (int i = 0; i < s.size(); ++i) {
        freqs[s[i] - 'a']++;
        freqs[t[i] - 'a']--;  
    }

    for (int tmp : freqs) {
        if (tmp) {
            return false;
        }
    }

    return true;
}
