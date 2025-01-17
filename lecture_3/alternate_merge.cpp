string mergeAlternately(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    std::string res = "";
    int i = 0;
    int j = 0;

    while (i < n || j < m) {
        if (i < n) {
            res.push_back(word1[i++]);
        }
        if (j < m) {
            res.push_back(word2[j++]);
        }
    }

    return res;
}
