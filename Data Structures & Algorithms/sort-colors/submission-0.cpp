class Solution {
public:
    int partition(vector<int>&arr,int low,int high){
        int pivot=arr[high];
        int j=low;
        int i=j-1;
        while(j<=high){
            while(j<=high && arr[j]>pivot){
                j++;
            }
            while(j<=high && arr[j]<=pivot){
                i++;
                swap(arr[i],arr[j]);
                j++;
            }
        }
        return i;
    }
    void qs(vector<int>&arr,int low,int high){
        if(low<high){
            int pindex=partition(arr,low,high);
            qs(arr,low,pindex-1);
            qs(arr,pindex+1,high);
        }
    }
    void sortColors(vector<int>& nums) {
        qs(nums,0,nums.size()-1);

    }
};