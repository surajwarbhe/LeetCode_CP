class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       vector<pair<int,char>>ans;
       for(int i=0;i<s.size();i++)
       {
          ans.push_back(make_pair(indices[i],s[i]));
       }
       sort(ans.begin(),ans.end());
       string res="";
       for(int i=0;i<s.size();i++)
       {
          res.push_back(ans[i].second);
       }
       return res;
    }
};


// class Solution {
// public:
//     string restoreString(string s, vector<int>& indices) {
        
//     string ans=s;
//     int n=s.size();
//     for(int i=0;i<n;i++)
//     {
//         int shuffle_pos=indices[i];
//         ans[shuffle_pos]=s[i];
//     }
//     return ans;
    

//     }
// };