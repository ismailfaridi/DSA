class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next: # 0 or 1 node, return None
            return None

        slow = head
        fast = head.next.next # start fast 2 nodes ahead to position slow before middle

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        slow.next = slow.next.next
        return head