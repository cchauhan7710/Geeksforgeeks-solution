class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = k-1;
        int sum = 0;
        int maxSum = INT_MIN;
        
        for(int i = 0; i<k; i++)
        {
             sum = sum + arr[i];
        }
        while(high<n)
        {
            maxSum = max(maxSum,sum);
            low++;
            high++;
            
            if(high == n)
            {
                break;
            }
            
            sum = sum - arr[low-1] ;
            sum = sum + arr[high];
        }
        return maxSum;
    }
};