bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
    int n = matrix.size(), m = matrix[0].size();
    int l = 0, r = n * m - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;
        int mid_elem = matrix[mid / m][mid % n];

        if (mid_elem < target) {
            l = mid + 1;
        } else if (mid_elem > target) {
            r = mid - 1;
        } else {
            return true;
        }
    }

    return false;
}
