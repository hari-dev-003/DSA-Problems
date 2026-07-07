class Solution {
public:
    string intToRoman(int num) {
        vector<pair<string,int>> roman = {
            {"M",1000},{"CM",900},{"D",500},{"CD",400},
            {"C",100},{"XC",90},{"L",50},{"XL",40},{"X",10},
            {"IX",9},{"V",5},{"IV",4},{"I",1}
        };
        string result="";
        for(int i=0;i<roman.size();i++){
            int numberOfSymbols = num/roman[i].second;
            if(numberOfSymbols!=0){
                for(int j=0;j<numberOfSymbols;j++) result+=roman[i].first;
            }
            num%=roman[i].second;
        }
        return result;
    }
};