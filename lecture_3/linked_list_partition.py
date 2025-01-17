def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
    great = ListNode()
    small = ListNode()

    great_tmp = great
    small_tmp = small

    while head:
        if head.val >= x:
            great_tmp.next = head
            great_tmp = head
        else:
            small_tmp.next = head
            small_tmp = head

        head = head.next

    great_tmp.next = None
    small_tmp.next = great.next
    return small.next
