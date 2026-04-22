class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if not head or not head.next:
            return False
        
        slow = fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                return True
        
        return False

# Uses Floydâs Cycle Detection (tortoise and hare) approach: a slow pointer moves one step while a fast pointer moves two steps. If there is a cycle, they will eventually meet; otherwise, the fast pointer reaches the end (null).
# TC: O(N)
# SC: O(1)