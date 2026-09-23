class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n=arr.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=val){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        return j;
    }
};