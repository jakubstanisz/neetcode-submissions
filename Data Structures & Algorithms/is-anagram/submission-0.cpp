class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        std::unordered_map<char, int> hashmap;

        for (int i{}; i < s.size(); i++){
            hashmap[s[i]]++;
        }
        for(int i{}; i < t.size(); i++){
            hashmap[t[i]]--;
        }
        for (auto items : hashmap){
            if (items.second != 0){
                return false;
            }
        }
        return true;
    }
};
