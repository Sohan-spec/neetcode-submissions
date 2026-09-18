class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n=s.length(),m=t.length();
        int i=0;
        while(i< n && i<m){
            if(s[i]==t[i]){
                i++;
            }
            else{
            return false;
            }
        }
        if(i==m && i==n)return true;
        return false;
    }
};
