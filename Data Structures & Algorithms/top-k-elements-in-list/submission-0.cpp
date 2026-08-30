class Solution { 
public: 
    vector<int> topKFrequent(vector<int>& nums, int k) { 

        unordered_map<int,int> mp; 

        for(int i = 0; i < nums.size(); i++) { 
            mp[nums[i]]++; 
        } 

        set<int,greater<int>> st; 

        for(auto it : mp) { 
            st.insert(it.second); 
        } 
        vector<int>ans;
        for(auto it :st){
            for(auto m:mp){
                if(m.second==it){
                    ans.push_back(m.first);
                }
                if(ans.size()==k)return ans;
            }
        }

        return ans; 
    } 
};