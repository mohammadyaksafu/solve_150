class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,int>mp;
        int j=0;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            int k=0;
            if(mp.find(s)!=mp.end()){
               k=mp[s]; 
               ans[k].push_back(strs[i]);
            }else{
                mp[s]=j;
ans.push_back({strs[i]});                j++;
            }
        }
        return ans;
    }
};
