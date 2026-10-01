class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length(),m=word2.length();
        int i=0;
        string res="";
        while(i<n && i<m){
            res+=word1[i];
            res+=word2[i];
            i++;
        }
        while(i<n){
            res+=word1[i];
            i++;
        }
        while(i<m){
            res+=word2[i];
            i++;
        }
        return res;
    }
};