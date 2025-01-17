def sortColors(self, nums: List[int]) -> None:
    mp = [0] * 3
    
    for i in nums:
        mp[i] += 1

    idx = 0
    for j, i in enumerate(mp):
        for _ in range(i):
            nums[idx] = j
            idx += 1
