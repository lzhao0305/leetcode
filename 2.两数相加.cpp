/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     ListNode *next;
  *     ListNode() : val(0), next(nullptr) {}
  *     ListNode(int x) : val(x), next(nullptr) {}
  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
  * };
  */
class Solution {
    public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int jinwei = 0;
        while (l1 || l2 || jinwei) {
            int a1 = l1 ? l1->val : 0;
            int a2 = l2 ? l2->val : 0;
            if (!head) {
                head = tail = new ListNode((a1 + a2) % 10);
                jinwei = (a1 + a2) / 10;
            } else {
                tail->next = new ListNode((a1 + a2 + jinwei) % 10);
                jinwei = (a1 + a2 + jinwei) / 10;
                tail = tail->next;
            }
            if (l1)l1 = l1->next;
            if (l2)l2 = l2->next;
        }
        return head;
    }
};
// @lc code=end

