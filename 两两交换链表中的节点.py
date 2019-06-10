# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        pre = ListNode(0)
        pre.next = head
        flag = 0

        while pre:
            if pre.next == None or pre.next.next == None:
                break
            p = pre.next
            q = p.next
            p.next = q.next
            q.next = p
            pre.next = q
            pre = p
            if flag == 0:  # 第一个交换要把head也换一下
                head = q
                flag += 1
        return head