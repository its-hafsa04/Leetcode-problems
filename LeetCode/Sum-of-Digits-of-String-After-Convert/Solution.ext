class Solution {
public:
    int getLucky(string s, int k) {
        string y = "";
        int num;
        unordered_map<char, string> maps = {
            {'a', "1"},  {'b', "2"},  {'c', "3"},  {'d', "4"},  {'e', "5"},
            {'f', "6"},  {'g', "7"},  {'h', "8"},  {'i', "9"},  {'j', "10"},
            {'k', "11"}, {'l', "12"}, {'m', "13"}, {'n', "14"}, {'o', "15"},
            {'p', "16"}, {'q', "17"}, {'r', "18"}, {'s', "19"}, {'t', "20"},
            {'u', "21"}, {'v', "22"}, {'w', "23"}, {'x', "24"}, {'y', "25"},
            {'z', "26"}};
        for (int i = 0; i < s.length(); i++)
            y += (maps[s[i]]);

        while(k--){
            int temp = 0;
            for(auto& v : y){
                temp = temp + (v - '0');
            }
            y = "";
            y = to_string(temp);
        }
        return stoi(y);
    }
};