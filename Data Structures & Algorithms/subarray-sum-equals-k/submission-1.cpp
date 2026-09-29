class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        mpp[0]++;
        int res=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mpp.find(sum-k)!=mpp.end())res+=mpp[sum-k];
            mpp[sum]++;
        }
        return res;
    }
};