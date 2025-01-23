bool checkDistances(string s, vector<int>& distance) {
    int arr[127] = {-1};

    for (int i = 0; i < s.size(); ++i) {
        if (arr[s[i]] == -1) {
            arr[s[i]] = i;
        } else {
            if (i - arr[s[i]] + 1 != distance[i])
                return false;
        }
    }

    return i;
}
