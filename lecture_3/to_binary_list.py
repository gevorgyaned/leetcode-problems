class Solution:
    def getDecimalValue(self, head: Optional[ListNode]) -> int:
        res = 0

        while head:
            res |= head.val
            res <<= 1
            head = head.next

        return res >> 1
