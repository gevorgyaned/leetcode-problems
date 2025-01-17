 def isPalindrome(self, head: Optional[ListNode]) -> bool:
    def helper(current, head):
        if not current:
            return head, True

        h, val = helper(current.next, head)

        return h.next, val and h.val == current.val
        
    _, i = helper(head, head)
    return i
