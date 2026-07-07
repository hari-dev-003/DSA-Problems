class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> result ;
        for(string word :words){
            int c1[128]={0},c2[128]={0};
            bool satisfy =true;
            for(int i=0;i<pattern.size();i++){
                if(c1[word[i]]!=c2[pattern[i]]){
                    satisfy = false;
                    break;
                }
                c1[word[i]]=i+1;
                c2[pattern[i]]=i+1;
            }
            if(satisfy){
                result.push_back(word);
            }
        }
        return result;
    }
};