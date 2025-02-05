class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.k = k
        self.heap = []

        for num in nums:
            if len(self.heap) < k:
                heapq.heappush(self.heap, num)
            elif self.heap[0] < num:
                heapq.heapreplace(self.heap, num)    

    def add(self, val: int) -> int:
        if not self.heap or len(self.heap) < self.k:
            heapq.heappush(self.heap, val)
        elif self.heap and val > self.heap[0]:
            heapq.heapreplace(self.heap, val)
        
        
        return self.heap[0]




# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)
