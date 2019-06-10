# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        head=ListNode(0)
        l3=head
        while l1 != None and l2 != None:
            if l1.val > l2.val:
                l3.next=l2
                l3=l3.next
                l2=l2.next
            else :
                l3.next=l1
                l3=l3.next
                l1=l1.next
        while l1!= None:
            l3.next=l1
            l3=l3.next
            l1=l1.next
        while l2!= None:
            l3.next=l2
            l3=l3.next
            l2=l2.next
        l3.next=None
        return head.next
                
