class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int brackets=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                brackets++;
                res = max(brackets,res);
            }
            else if(brackets>0 && s[i]==')'){
                brackets--;
            }
        }
        return res;
    }
};