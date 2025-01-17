string largestMerge(string word1, string word2) {
    std::string merge;
    int i = 0, j = 0;
    
    while (i < word1.size() || j < word2.size()) {
        if (i < word1.size() && (j >= word2.size() || word1.substr(i) >= word2.substr(j))) {
            merge += word1[i];
            i++;
        } else {
            merge += word2[j];
            j++;
        }
    }
    
    return merge;
}
