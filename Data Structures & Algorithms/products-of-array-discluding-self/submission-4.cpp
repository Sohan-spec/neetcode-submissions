class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        int zerocount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)zerocount++;
            else prod*=nums[i];
        }
        vector<int>res(n,0);
        if(zerocount>1)return res;
        for(int i=0;i<n;i++){
            if(zerocount==1){
                if(nums[i]==0){
                    res[i]=prod;
                }
            }
            else{
                res[i]=prod/nums[i];
            }
        }
        return res;
    }
};
