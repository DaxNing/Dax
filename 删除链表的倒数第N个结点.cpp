# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        p=head
        q=head
        r=None
        while n>0:
            p=p.next
            n-=1
        while p!=None:
            p=p.next
            r=q
            q=q.next
        if r==None:
            head=q.next
        else:
            r.next=q.next
        return head
