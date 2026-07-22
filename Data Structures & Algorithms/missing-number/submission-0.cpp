class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n= nums.size();

        int ans=0;
        int j=1;
        for(int i=0;i<n;i++){
            ans^=nums[i];
            ans^=j;
            j++;
        }
        return ans; 
    }
};
