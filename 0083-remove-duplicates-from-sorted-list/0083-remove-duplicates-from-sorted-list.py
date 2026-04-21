# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head: # early return for empty list (not required for correctness, just clarity)
            return head
        
        cur = head

        while cur and cur.next:
            if cur.val == cur.next.val:
                cur.next = cur.next.next # Skip duplicate node by rewiring pointer
            else:
                cur = cur.next
        
        return head

# Because the list is sorted, duplicates are always side-by-side, so we just âskip overâ repeated nodes using pointer rewiring.