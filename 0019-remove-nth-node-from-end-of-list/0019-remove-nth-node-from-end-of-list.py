class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        slow = fast = head

        # Move fast pointer n steps ahead
        for _ in range(n):
            fast = fast.next
        
        # If fast becomes None, it means we need to remove the head node
        if fast == None:
            return head.next

        # Move both pointers until fast reaches the end, so slow points to node before the one to delete
        while fast.next is not None:
            slow = slow.next
            fast = fast.next
        
        slow.next = slow.next.next
        return head

# Move the fast pointer n steps first, then move both together. When fast reaches the end, slow is right before the n-th node from the end. Rewire the pointers and return the head.
# TC: O(N)
# SC: O(1)