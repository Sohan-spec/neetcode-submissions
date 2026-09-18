class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int req=target-nums[i];
            if(mpp.find(req)!=mpp.end())return {min(i,mpp[req]),max(i,mpp[req])};
            mpp[nums[i]]=i;
        }
        return {0,0};
        
    }
};
