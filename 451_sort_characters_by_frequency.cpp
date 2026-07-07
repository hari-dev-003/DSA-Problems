class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>> v (mp.begin(),mp.end());

        sort(v.begin(),v.end(),[] (const pair<char,int>&a , const pair<char,int>&b){
            if(a.second !=b.second){
                return a.second>b.second;
            }
            return a.first >b.first;
        });
        string result ="";
        for (auto p :v){
            result+=string(p.second,p.first);
        }
        return result;
    }
};