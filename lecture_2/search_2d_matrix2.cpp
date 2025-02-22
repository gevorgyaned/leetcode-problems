bool searchMatrix(std::vector<std::vector<int>>& mat, int target) {
    int n = mat.size(), m = mat[0].size();
    int i = 0, j = m - 1;

    while (i < n && j >= 0) {
        if (mat[i][j] == target) 
            return true;
        else if (mat[i][j] > target) {
            --j;
        } else {
            ++i;
        }
    }

    return false;
}
