pub fn find_min(nums: Vec<i32>) -> i32 {
    let mut left = 0;
    let mut right = nums.len() - 1;

    while left + 1 < right {
        let mid  = left + (right - left) / 2;

        if nums[left] < nums[right] {
            return nums[left];
        }

        if nums[mid] > nums[left] {
            left = mid + 1;
        } else if nums[mid] < nums[left] {
            right = mid;
        }
    }

    std::cmp::min(nums[left], nums[right])
}
