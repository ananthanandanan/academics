class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        s, e = 0, len(numbers) - 1
        while s != e:
            if (numbers[s] + numbers[e]) == target:
                return s+1, e+1
            elif (numbers[s] + numbers[e]) > target:
                e -= 1
            else:
                s += 1