class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        ll res=0;
        ll curr_sum=0;
        unordered_map<ll,vector<int>> sum_map;
    
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            if(curr_sum==0){
                res++;
            }
            if (sum_map[curr_sum].size() != 0){
                res+=sum_map[curr_sum].size();
            }
            sum_map[curr_sum].push_back(i);
        }
        return res;
    }
};
