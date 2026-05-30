1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> stack;
5        for (char c : s) {
6            if (c == '(' || c == '[' || c == '{') {
7                stack.push(c);
8            } else {
9                if (stack.empty() || (c == ')' && stack.top() != '(') ||
10                    (c == ']' && stack.top() != '[') ||
11                    (c == '}' && stack.top() != '{')) {
12                    return false;
13                }
14                stack.pop();
15            }
16        }
17        return stack.empty();
18    }
19};