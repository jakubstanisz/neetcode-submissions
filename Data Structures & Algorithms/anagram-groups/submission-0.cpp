class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        int val = 'a';
        for(string s : strs){
            string count(26, 0);
            for(char c : s){
                count[c - val]++;
            }
            hashmap[count].push_back(s);
        }
        vector<vector<string>> result;
        for (auto items : hashmap){
            result.push_back(items.second);
        }
        return result;
    }
};
