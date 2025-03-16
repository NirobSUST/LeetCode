class Solution {  // Define a class named Solution.
public:
    ListNode* middleNode(ListNode* head) {  // Function to find the middle node of a linked list.
        ListNode* fast = head;  // Pointer "fast" starts at the head of the linked list.
        ListNode* slow = head;  // Pointer "slow" also starts at the head.

        while (fast && fast->next) // Loop continues as long as "fast" is not null and "fast->next" is not null.
        {
            slow = slow->next;  // Move "slow" one step forward.
            fast = fast->next->next;  // Move "fast" two steps forward.
        }
        return slow;  // When "fast" reaches the end, "slow" will be at the middle node.
    }
};
/*
Time Complexity -> O(N)
Space Complexity -> O(1)
*/