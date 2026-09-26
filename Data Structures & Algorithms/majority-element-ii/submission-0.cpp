class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        vector<int>res;
        for(auto x:nums){
            mpp[x]++;
        }
        for(auto x:mpp){
            if (x.second>(n/3)){
                res.push_back(x.first);
            }
        }
        return res;
    }
};