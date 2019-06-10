#!/user/bin/python
# _*_ coding: UTF-8 _*_

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[ListNode]
        :rtype: ListNode
        """
        '''
        head=ListNode(0)
        head.next=None
        n=len(lists)
        for i in range(n):
            q=head
            p=head.next
            while lists[i] and p:
                if p.val<lists[i].val:
                    q.next=p
                    q=q.next
                    p=p.next
                else:
                    q.next=lists[i]
                    q=q.next
                    lists[i]=lists[i].next
            if lists[i]:
                q.next=lists[i]
            if p:
                q.next=p
        return head.next
        #基本思想就是把所有链都塞到一条链里去
        #显然，很暴力
        '''

        # Definition for singly-linked list.
        # class ListNode:
        #     def __init__(self, x):
        #         self.val = x
        #         self.next = None

        class Solution:
            def mergeKLists(self, lists: List[ListNode]) -> ListNode:
                if not lists: return
                n = len(lists)
                return self.merge(lists, 0, n - 1)

            def merge(self, lists, left, right):
                if left == right:
                    return lists[left]
                mid = left + (right - left) // 2
                l1 = self.merge(lists, left, mid)
                l2 = self.merge(lists, mid + 1, right)
                return self.mergeTwoLists(l1, l2)

            def mergeTwoLists(self, l1, l2):
                if not l1: return l2
                if not l2: return l1
                if l1.val < l2.val:
                    l1.next = self.mergeTwoLists(l1.next, l2)
                    return l1
                else:
                    l2.next = self.mergeTwoLists(l1, l2.next)
                    return l2
