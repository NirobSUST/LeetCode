class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int>> minHeap;

        for (auto i : nums)
        {
            minHeap.push(i);

            if (minHeap.size() > k)
            {
                minHeap.pop();
                // break;
            }
        }
        return minHeap.top();
    }
};

/*
Approach: Heap (Priority Queue)
Time Complexity: O(N log K)
Space Complexity: O(K)
*/