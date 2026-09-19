class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<vector<int>>mpp(n+1);
        for(auto x:freq){
            mpp[x.second].push_back(x.first);
        }
        vector<int>res;
        for(int i=n;i>=0;i--){
            if(res.size()==k)break;
            for(int num:mpp[i]){
                res.push_back(num);
                if(res.size()==k)break;
            }
        }
        return res;
    }
};
