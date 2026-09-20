class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto x:strs){
            s+=to_string(x.length())+'#'+x;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int n=s.length();
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            res.push_back(s.substr(j,len));
            i=j+len;
        }
        return res;
    }
};
