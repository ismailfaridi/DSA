class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:        
        slow = fast = head

        # Detect Cycle
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

            if slow == fast:
                # Find Cycle Start
                slow = head
                while slow != fast:
                    slow = slow.next
                    fast = fast.next
                return slow

        return None
        
# After detecting a cycle using slow & fast pointers, reset one pointer to the head. Move both one step at a time; the point where they meet again is the start of the cycle, because both are equally distant from it.
# TC: O(N)
# SC: O(1)