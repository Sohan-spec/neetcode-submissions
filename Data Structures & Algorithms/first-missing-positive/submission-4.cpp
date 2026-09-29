class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        int missing;
        for(int i=1;i<n;i++){
            if(find(arr.begin(),arr.end(),i)==arr.end()){
                missing=i;
                break;
            }
        }
        return missing;
    }
};