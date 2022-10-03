class Solution
{
    public:    
        int findTrailingZeros(int n)
        {
            int count = 0;
            for (int i = 5; i<=n; i=i* 5)
                count += n / i;
            return count;
        }
        
        int findNum(int n)
        {   
            int low = 5;
            int high = 1e9;
            int mid=low+(high-low)/2;
            int ans;
            while(low<=high){
                int ans=findTrailingZeros(mid);
                if(ans==n){
                    return (mid/5)*5;
                }
                else if (ans>n){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                mid=low+(high-low)/2;
            }
        }
};
