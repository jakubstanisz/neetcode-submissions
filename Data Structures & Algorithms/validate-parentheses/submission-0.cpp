class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> super {
            {'}', '{'},
            {')', '('},
            {']', '['}
        };
        vector<char> v;

        for (char c : s) {
            if (super.contains(c)) {
                if (v.empty() || v.back() != super[c]) {
                    return false;
                }
                v.pop_back();
            } else {
                v.push_back(c);
            }
        }

        return v.empty();
    }
};