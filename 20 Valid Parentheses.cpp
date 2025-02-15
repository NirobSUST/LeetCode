class Solution {
public:
    bool isValid(string s) {
        stack<char> parentheses;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                parentheses.push(s[i]);
            }
            else
            {
                if (parentheses.empty()) return false;
                char temp = parentheses.top();

                if (temp == '(' && s[i] == ')' && !parentheses.empty())  parentheses.pop();
                else if (temp == '{' && s[i] == '}' && !parentheses.empty())  parentheses.pop();
                else if (temp == '[' && s[i] == ']' && !parentheses.empty())  parentheses.pop();
                else return false;
            }
        }
        return parentheses.empty();
    }
};
/*
Time Complexity     ->  O(n) (Processing each character once)
Space Complexity    ->  O(n) (Using a stack in the worst case)
*/