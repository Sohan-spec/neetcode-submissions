class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        for(auto x:s){
            if(isalnum(x)){
                t+=tolower(x);
            }
        }
        string t2=t;
        reverse(t2.begin(),t2.end());
        return t==t2;
    }
};
