class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{   long long temp1,temp2;
	    int c=0,k,j;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++){
	        temp1=sum-arr[i];
	        j=i+1;
	        k=n-1;
	        while(k>j){
	            if(arr[j]+arr[k]<temp1){ 
	                c+=(k-j);
	                j++;
	            }
	            else{
	                k--;
	            }
	       }
	    }
	    return c;
	}
		 

};
