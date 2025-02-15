class Solution {
public:
    bool hasCycle(ListNode *head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow -> next;
            fast = fast -> next -> next ;
            if ( slow == fast )
            {
                return true;
            }
        }

        return false ;
    }

};
/*
Time Complexity: O(n) (Each node is visited at most once).
Space Complexity: O(1) (Uses only two pointers, no extra memory).
*/