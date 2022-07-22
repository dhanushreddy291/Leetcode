class Solution {
    public ListNode partition(ListNode head, int x) {
        if (head != null && head.next != null) {
            if (head.val >= x) {
                ListNode Curr = head, start = null, startEnd = null;
                while (Curr.next != null) {
                    if (Curr.next.val < x) {
                        if (start == null) {
                            start = Curr.next;
                            startEnd = start;
                            Curr.next = start.next;
                        } else {
                            startEnd.next = Curr.next;
                            startEnd = startEnd.next;
                            Curr.next = startEnd.next;
                        }
                    } else {
                        Curr = Curr.next;
                    }
                }
                if (start != null) {
                    startEnd.next = head;
                    head = start;
                }
            } else {
                head.next = partition(head.next, x);
            }
        }
        return head;
    }
}