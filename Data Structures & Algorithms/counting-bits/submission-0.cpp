class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int j=0;j<=n;j++){
            int c=0;
            int i=j;
            while(i){
                i &=(i-1);
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};
