class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<vector<int>,vector<string>>mpp;
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            for(int j=0;j<strs[i].length();j++){
                freq[strs[i][j]-'a']++;
            }
            mpp[freq].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto x:mpp){
            res.push_back(x.second);
        }
        return res;
    }
};
