class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stackS, stackT;

        for(char c: s){
            if(c!='#'){
                stackS.push(c);
            }else if (!stackS.empty()){
                stackS.pop();
            }
        }
        for(char c: t){
            if(c!='#'){
                stackT.push(c);
            }else if (!stackT.empty()){
                stackT.pop();
            }
        }
return stackS == stackT;

    }
};