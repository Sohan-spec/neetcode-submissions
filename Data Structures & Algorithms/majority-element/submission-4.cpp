class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int current=nums[0];
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0){
                current=nums[i];
            }
            if(current==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return current;
    }
};