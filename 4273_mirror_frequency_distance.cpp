class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        int total = 0;
        unordered_set<char> visited;

        for (auto& [c, freq] : mp) {
            if (visited.count(c))
                continue;
            char mirror;
            if (c >= 'a' && c <= 'z') {
                mirror = 'z' - (c - 'a');
            } else {
                mirror = '9' - (c - '0');
            }
            int freqMirror = mp.count(mirror) ? mp[mirror] : 0;
            total += abs(freq - freqMirror);

            visited.insert(c);
            visited.insert(mirror);
        }
        return total;
    }
};