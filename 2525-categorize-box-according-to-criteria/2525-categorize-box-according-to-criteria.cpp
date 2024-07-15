class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool b = ((long long)length * width * height >= 1e9) || length >= 1e4 ||
                 height >= 1e4 || width >= 1e4;
        bool h = mass >= 100;
        if (b && h)
            return "Both";
        else if (!b && !h)
            return "Neither";
        else if (b)
            return "Bulky";
        else
            return "Heavy";
    }
};