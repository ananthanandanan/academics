class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummyHead = curHead = ListNode(0)
        while l1 != None and l2 != None:
            if l1.val <= l2.val:
                curHead.next = l1
                curHead = curHead.next
                l1 = l1.next
            else:
                curHead.next = l2
                curHead = curHead.next
                l2 = l2.next
                
        if l1 != None: curHead.next = l1
        if l2 != None: curHead.next = l2
        return dummyHead.next