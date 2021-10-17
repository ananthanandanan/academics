class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n1 = len(nums1)
        n2 = len(nums2)
      
        
        def kth(a, b, k):
            if len(a) > k:
                a = a[:k]
            if len(b) > k:
                b = b[:k]
            if len(a) > len(b):
                a, b = b, a
            if not a:
                return b[k - 1]
            if k == 1:
                return min(a[0], b[0])
            i = max(len(a) // 2, 1)
            j = k - i
            if a[i - 1] > b[j - 1]:
                return kth(a[:i], b[j:], k - j)
            else:
                return kth(a[i:], b[:j], k - i)
            
        
        m1 = kth(nums1, nums2, (n1 + n2) // 2 + 1)
        if (n1 + n2) % 2:
            return m1
        else:
            m2 = kth(nums1, nums2,(n1 + n2) // 2)
            return (m1 + m2) / 2.0