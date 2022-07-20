# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        count = 0
        orig = head
        while head is not None:
            count += 1
            head = head.next
        count = count // 2
        while count > 0:
            orig = orig.next
            count -= 1
        return orig