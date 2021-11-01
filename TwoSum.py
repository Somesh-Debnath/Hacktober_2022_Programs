class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        data = {}
        for index,num in enumerate(nums):
            if num not in data:
                data[target-num] = index
            else:
                return [index,data[num]]
        return
