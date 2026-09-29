class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        vector<vector<int>>mpp(n+1);
        for(auto x:freq){
            mpp[x.second].emplace_back(x.first);
        }
        vector<int>res;
        for(int i=n;i>=0;i--){
            if(res.size()==k)return res;
            for(auto x:mpp[i]){
                res.push_back(x);
                if(res.size()==k)return res;
            }
        }
        return res;
    }
};
