class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        dic = collections.defaultdict(int)
        dic[0] = 1
        res = 0
        presum = 0
        for num in nums:
            presum += num
            res += dic[presum%k]
            dic[presum%k] += 1
        return res