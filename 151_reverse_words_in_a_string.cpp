class Solution {
public:
    string reverseWords(string s) {
        string rev="";
      int start = s.size()-1;
      while(start>=0){
        while(start>=0 && s[start]==' ') start--;

        if(start<0) break;

        int end = start;
        while(start>=0 && s[start]!=' ') start--;

        if(!rev.empty()) rev+=' ';

        rev += s.substr(start+1,end-start);
      }
      return rev;
    }
      
};