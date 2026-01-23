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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> q;
        for (auto &a : arr) {
            if (a != nullptr) {
                q.push({a->val, a});
            }
        }
        
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        cout << "q size " << q.size() << endl;
        while (!q.empty()) {
            pair<int, ListNode*> temp = q.top();
            q.pop();

            tail->next = temp.second;
            tail = tail->next;

            if (temp.second->next != nullptr) {
                q.push({temp.second->next->val, temp.second->next});
            }
        }
        return head->next;
    }
};