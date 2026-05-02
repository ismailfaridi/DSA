class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next or k == 0:
            return head
        
        # Find length of linked list
        length, tail = 1, head
        while tail.next:
            tail = tail.next
            length += 1
        
        k = k % length # Make k smaller than length (handles large k)
        if k == 0:
            return head
        
        # Find the new tail position (length - k - 1 steps from head)
        cur = head
        for _ in range(length - k - 1):
            cur = cur.next
        
        # Rearrange pointers to rotate
        new_head = cur.next
        cur.next = None
        tail.next = head
        
        return new_head