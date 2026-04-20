class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None

        prev, cur = None, head

        while cur:
            next_node = cur.next
            cur.next = prev
            prev = cur
            cur = next_node
        
        return prev

# Traverse the list while rewiring each node's next pointer to point backward to its predecessor. This flips the link direction, turning the original tail into the new head.
# TC: O(N)
# SC: O(1)