class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        cur = dummy
        carry = 0

        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0

            total = v1 + v2 + carry
            carry = total // 10
            cur.next = ListNode(total % 10)
            cur = cur.next

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None

        return dummy.next

'''
TC: O(max(l1, l2))
SC: O(max(l1, l2))

We treat both linked lists like numbers written in reverse and simulate **normal addition (like on paper)**. At each step, we add the two digits along with a carry, keep the last digit as part of the answer, and pass the remaining value forward as the new carry. A dummy node helps us easily build the result list from start to end.

**Key idea:**

- `123 % 10 = 3` â gives the **last digit** (what we store in the node)
- `123 // 10 = 12` â gives the **carry** (what we pass to the next step)

**Carry:** The maximum possible sum is `9 + 9 + 1 = 19`, so the carry is always **0 or 1** (never more than one digit).
'''