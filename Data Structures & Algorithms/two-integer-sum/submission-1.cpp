class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int remainder=target-nums[i];
            if(mpp.find(remainder)!=mpp.end())return{mpp[remainder],i};
            mpp[nums[i]]=i;
        }
        return {0,0};
    }
};
