int numJewelsInStones(string jewels, string stones) {
    int mp[127] = {0};

    for (char c : jewels) {
        mp[c] = 1;
    }

    int count = 0;
    for (char c : stones) {
        count += mp[c];
    }

    return count;
}
