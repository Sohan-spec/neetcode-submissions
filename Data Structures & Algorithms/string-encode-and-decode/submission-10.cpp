class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(auto x:strs){
            res+=to_string(x.length())+'#'+x;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        int n=s.length();
        while(i<n){
            int j=i;
            while(j<n && s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i));
            j++;
            res.push_back(s.substr(j,length));
            i=j+length;
        }
        return res;
        
    }
};
