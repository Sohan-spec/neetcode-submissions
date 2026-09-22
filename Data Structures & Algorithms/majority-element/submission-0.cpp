class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int count=0;
            for(int j=0;j<n;j++){
                if(num==nums[j]){
                    count++;
                    if(count>(n/2))return num;
                }
            }
        }
        return 0;
    }
};