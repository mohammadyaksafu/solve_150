class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;

        for(auto i:st){
            if(st.find(i-1)==st.end()){
               int count=1;
                int current=i;
                while(st.find(current+1)!=st.end()){
                    count++;
                    current++;
                }

                ans=max(count,ans);
            }
        }






        return ans;

    }
};
