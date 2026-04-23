class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        # Find middle
        slow = fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        # Reverse second half
        prev, cur = None, slow
        while cur:
            next_node = cur.next
            cur.next = prev
            prev = cur
            cur = next_node
        
        # Compare two halves
        left, right = head, prev
        while right:
            if left.val != right.val:
                return False
            left, right = left.next, right.next
        return True

# This approach uses slow/fast pointers to find the middle, then reverses the second half of the list in-place. It then compares the first half against the reversed second half to verify symmetry, achieving O(n) time and O(1) space.