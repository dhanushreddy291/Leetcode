# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        count = 0
        orig = head
        while head is not None:
            head = head.next
            count += 1
       # K = 1 + count - n th node from start
       # Remove Kth Node from start
        K = 1 + count - n
        if K == 1:
            return orig.next
        K -= 2
        head = orig
        while K > 0:
            orig = orig.next
            K -= 1
        orig.next = orig.next.next
        return head
