class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = defaultdict(lambda: 0)

        for i in nums:
            count[i] += 1

        count = list(count.items())

        heap = []
        for num, c in count:
            heapq.heappush(heap, (c, num))
            if (len(heap) > k):
                heapq.heappop(heap)
        
        return [heapq.heappop(heap)[1] for _ in range(len(heap))]

