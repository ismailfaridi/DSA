class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(0, head) # Dummy node before head to handle edge cases easily
        prev = dummy

        while head:
            if head.next and head.val == head.next.val:
                # Skip all nodes that have duplicate values
                while head.next and head.val == head.next.val:
                    head = head.next
                prev.next = head.next # Link to the next distinct node
            else:
                # Move prev forward when current node (head) is unique
                prev = prev.next
            
            head = head.next
        
        return dummy.next

# We traverse the linked list while comparing each node with its next to detect duplicates. When duplicates are found, we skip all nodes with that value and connect the previous node to the next distinct node; otherwise, we simply move forward, keeping the node in the list. A dummy node is used to handle edge cases easily, such as when duplicates appear at the beginning or when all nodes are duplicates, ensuring we can correctly return the updated head.
# TC: O(N)
# SC: O(1)