class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        nums1.sort()
        nums2.sort()
        ans=[]
        for i in nums1:
            if i in nums2:
                ans.append(i)
        return list(set(ans))