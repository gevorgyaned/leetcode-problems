vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    std::sort(items1.begin(), items1.end());
    std::sort(items2.begin(), items2.end());
    std::vector<std::vector<int>> res;
    int i = 0;
    int j = 0;
    int n = items1.size();
    int m = items2.size();

    while (i < n && j < m) {
        if (items1[i][0] == items2[j][0]) {
            res.push_back({items1[i][0], items1[i][1] + items2[j][1]});
            i++;
            j++;
        } else if (items1[i][0] < items2[j][0]) {
            res.push_back(items1[i]);
            i++;
        } else {
            res.push_back(items2[j]);
            j++;
        }
    }

    while (i < n) {
        res.push_back(items1[i]);
        i++;
    }

    while (j < m) {
        res.push_back(items2[j]);
        j++;
    }

    return res;
}
