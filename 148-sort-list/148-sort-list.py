# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head:
            currNode, tailNode = head, None
            while currNode is not None:
                tailNode = currNode
                currNode = currNode.next
            return self.mergeSort(head, tailNode)
        return head

    def mergeSort(self, head, tail):
        if head is not None:
            currNode, length = head, 0
            while currNode is not None:
                length += 1
                currNode = currNode.next
            length = ((1 + length) // 2) - 1
            currNode = head
            while length > 0:
                length -= 1
                currNode = currNode.next
            rightNode = currNode.next
            currNode.next = None
            leftPart = head if head == currNode else self.mergeSort(head, currNode)
            rightPart = tail if rightNode == tail else self.mergeSort(rightNode, tail)
            return self.merge(leftPart, rightPart)
        return head

    def merge(self, L, R):
        if L is not None and R is not None:
            head = None
            if L.val < R.val:
                head = L
                L = L.next
            else:
                head = R
                R = R.next
            head.next = self.merge(L, R)
            return head
        elif L is not None:
            return L
        else:
            return R
