# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow = fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        return slow

# We use two pointers: slow moves one step and fast moves two steps. When fast reaches the end, slow will be exactly at the middle of the linked list.
# TC: O(N)
# SC: O(1)