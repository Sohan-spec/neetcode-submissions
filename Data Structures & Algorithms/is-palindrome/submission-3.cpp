class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto x:s){
            if(isalnum(x)){
                res+=tolower(x);
            }
        }
        int l=0,r=res.length()-1;
        while(l<r){
            if(res[l]!=res[r])return false;
            l++;
            r--;
        }
        return true;
    }
};
