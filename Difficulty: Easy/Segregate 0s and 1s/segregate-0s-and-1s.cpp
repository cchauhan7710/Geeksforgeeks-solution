class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        vector<int>one;
        vector<int>zero;
        int i = 0;
        int n = arr.size();
        while(i<arr.size())
        {
            if(arr[i]==0)
            {
                zero.push_back(arr[i]);
            
                
            }
            else
            {
                one.push_back(arr[i]);
            }
            i++;
        }
        
        if(one.size()==0||zero.size()==0)
        {
            return ;
            
        }
        
        int z = zero.size();
        int o = one.size();
        int id = 0;
       
        
            for(int i=0; i<z; i++)
            {
                arr[id]=zero[i];
                id++;
            }
            
            for(int i=0; i<o; i++)
            {
                arr[id] = one[i];
                id++;
                
            }
        
        return;
    }
};