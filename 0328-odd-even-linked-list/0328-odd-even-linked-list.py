# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        odd, even = head, head.next
        even_head = head.next

        while even and even.next:
            odd.next = odd.next.next
            even.next = even.next.next

            odd, even = odd.next, even.next
        
        odd.next = even_head
        return head

# Separate the list into odd and even indexed nodes by skipping one node each time. odd builds the odd list, even builds the even list. Finally, connect the even list after the odd list.
# TC: O(N)
# SC: O(1)