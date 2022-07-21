# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        i, j = head, head.next if head else None
        while j is not None:
            while j is not None and j.val == i.val:
                j = j.next
            i.next = j
            i = j
        return head
            