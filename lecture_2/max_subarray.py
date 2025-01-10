def maxSubArray(self, nums: List[int]) -> int:
    current_max = 0
    maximal = float('-inf')

    for i in nums:
        current_max = max(current_max, 0)
        current_max += i
        maximal = max(current_max, maximal)

    return maximal
