class Solution:
    def largestSumAfterKNegations(self, nums: List[int], k: int) -> int:
        heapq.heapify(nums)
        for _ in range(k):
            cur=heapq.heappop(nums)
            heapq.heappush(nums, -cur)
        
        return sum(nums)