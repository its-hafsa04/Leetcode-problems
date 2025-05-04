class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> b = {{'}', '{'}, {')', '('}, {']', '['}};
        stack<char> stack;
        for (char c : s) {
            if (b.find(c) != b.end()) {
                if (stack.empty() || stack.top() != b[c])
                    return false;
                else
                    stack.pop();
            } else
                stack.push(c);
        }
        return stack.empty();
        }
    };