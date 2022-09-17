class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        ll res=0;
        ll curr_sum=0;
        unordered_map<ll,ll> sum_map;
    
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            if (sum_map.find(curr_sum) != sum_map.end()){
                res+=sum_map[curr_sum];
                sum_map[curr_sum]++;
            }
            else{
                sum_map.insert({curr_sum,1});
            }
            if(curr_sum==0){
                res++;
            }
        }
        return res;
    }
};
