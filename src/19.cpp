#include<iostream>
#include<assert.h>
#include<vector>
#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

// 很好的技巧：因为，我们无法访问我们想要删除的节点 之前 的节点，我们始终不能修改该节点的 next 指针。
// 相反，我们必须将想要删除的节点的值替换为它后面节点中的值，然后删除它之后的节点。

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* guard = new ListNode(0, head);
        ListNode* first = guard;
        ListNode* second = head; 
        for(int i = 0; i < n - 1; i++)
        {
            second = second->next;
        }

        while (second->next)
        {
            first = first->next;
            second = second->next;
        }

        first->next = first->next->next;
        ListNode* ans = guard->next;
        delete guard;
        return ans;
    }
};

int main()
{
    Solution s;
    ListNode p1(1);
    ListNode p2(2);
    ListNode p3(3);
    ListNode p4(4);
    ListNode p5(5);
    p1.next = &p2;
    p2.next = &p3;
    p3.next = &p4;
    p4.next = &p5;
    s.removeNthFromEnd(&p1, 5);
    return 0;
}