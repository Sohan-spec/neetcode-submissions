class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int curr=0;
        int count=0;
        for(auto x:nums){
            if(count==0){
                curr=x;
            }
            if(curr==x) count++;
            else count--;
        }
        return curr;
    }
};