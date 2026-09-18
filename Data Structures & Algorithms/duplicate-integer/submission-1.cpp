class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>stt;
        for(int i=0;i<n;i++){
            if(stt.find(nums[i])!=stt.end())return true;
            stt.insert(nums[i]);
        }
        return false;
    }
};