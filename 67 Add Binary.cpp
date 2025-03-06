class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string res;

        // Process both strings from end to beginning.
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            // Append the binary digit.
            res.push_back(char(sum % 2 + '0'));
            carry = sum / 2;
        }

        // Reverse the result to get the correct order.
        reverse(res.begin(), res.end());
        return res;
    }
};

/*
Time Complexity -> O(N)
Space Complexity -> O(N)
*/