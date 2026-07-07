class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        stringstream ss(s);
        string word;
        while(getline(ss,word,' ')){
            arr.push_back(word);
        }
        if(pattern.length()!=arr.size()) return false;

        unordered_map<string,char> m1;
        unordered_map<char,string> m2;
        for(int i=0;i<pattern.size();i++){
            string word = arr[i];
            char c = pattern [i];
            if(m1.find(word)!=m1.end()){
                if(m1[word]!=c){ return false;}
            }
            else {m1[word]=c;}
            if(m2.find(c)!=m2.end()){
                if(m2[c]!=word){ return false;}
            }
            else {m2[c]=word;}
        }
        return true;
    }
};