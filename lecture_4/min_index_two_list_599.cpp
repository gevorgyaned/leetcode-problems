vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    std::unordered_map<std::string, int> um;
    for (int i = 0; i < list1.size(); ++i) {
        um[list1[i]] = i;
    }

    std::vector<std::string> res;
    int curr_min = INT_MAX;
    for (int i = 0; i < list2.size(); ++i) {
        if (um.contains(list2[i])) {
            int s = i + um[list2[i]];
            if (curr_min > s) {
                res.clear();
                res.push_back(list2[i]);
                curr_min = s;
            } else if (curr_min == s) {
                res.push_back(list2[i]);
            }
        }
    }

    return res;
}
