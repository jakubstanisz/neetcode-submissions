class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> uSet;
        for( int number : nums) {
            uSet.insert(number);
        }
        if(uSet.size() != nums.size()){
            return true;
        }
        return false;
    }
};