class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        help(ret, "", n, n);
        return ret;
    }
    void help(vector<string>& res, string str, int l, int r) {
        if (l == 0 && r == 0) {
            res.push_back(str);
            return;
        }
        if (l > 0)
            help(res, str + "(", l - 1, r);
        if (r > l)
            help(res, str + ")", l, r - 1);
    }
};