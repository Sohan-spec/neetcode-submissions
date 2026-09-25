class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>stt;
        for(auto x:nums){
            stt.insert(x);
        }
        int maxcnt=0;
        for(auto x:nums){
            if(stt.find(x-1)==stt.end()){
                int count=1;
                int curr=x;
                while(stt.find(curr+1)!=stt.end()){
                    curr++;
                    count++;
                }
                maxcnt=max(maxcnt,count);
            }
        }
        return maxcnt;
    }
};
