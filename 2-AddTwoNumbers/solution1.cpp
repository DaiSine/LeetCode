#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* cur = result;
        int carry = 0;//进位
        int sum = 0;//每一位相加的结果
        while(l1 != nullptr || l2 != nullptr)
        {
            int x = l1 != nullptr ? l1->val : 0;
            int y = l2 != nullptr ? l2->val : 0;
            sum = x + y + carry; //需要加上进位
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            if(l1 != nullptr)
                l1 = l1->next;
            if(l2 != nullptr)
                l2 = l2->next;
        }

        if (carry != 0)
        {
            cur->next = new ListNode(carry);
        }  
        return result->next;
    }
};
