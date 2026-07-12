class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int low = 0;
        int high =0;
        int res = INT_MIN;
        unordered_map<char, int> f;
        
        for(int high = 0; high<s.size(); high++)
        {
            f[s[high]]++;
            
            while(f.size()>k)
            {
                f[s[low]]--;
                
                if(f[s[low]]==0)
                {
                    f.erase(s[low]);
                }
                low++;
            }
            
            if(f.size()==k)
            {
                int len = high - low +1;
                
                res = max(res,len);
            }
            
        }
        if(res == INT_MIN)
        return -1;
        return res;
    }
};