class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n)return{};
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>vec(mpp.begin(),mpp.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(vec[i].first);
        }
        return ans;
        
    }
};
