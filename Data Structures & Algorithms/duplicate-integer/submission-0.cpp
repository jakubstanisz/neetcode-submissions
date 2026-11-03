class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> hashmap;
        for(int num : nums){
            if(hashmap[num] == false){
                hashmap[num] = true;
            }
            else{
                return true;
            }
            hashmap.insert({num, false});
        }
        return false;
    }
};