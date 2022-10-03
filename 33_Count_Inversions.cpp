class Solution{
  public:
  
     long long merge(long long arr[], long long l, long long m, long long r)
    {
        long long temp[r-l+1];
        long long i,j,k;
        i = l;
        j = m+1;
        k=0;
        long long ci=0;
        while(i<=m&&j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
                ci+=(m-i+1);
            }
        }
        while(i<=m)
        temp[k++] = arr[i++];
        while(j<=r)
        temp[k++] = arr[j++];
        for(long long i=l;i<=r;i++)
        {
            arr[i] = temp[i-l];
        }
        return ci;
    }
    
    long long  mergesort(long long arr[], long long low, long long high)
    {
        long long ci=0;
        if(low<high)
        {
            long long mid = (low+high)/2;
            ci += mergesort(arr, low, mid);
            ci += mergesort(arr, mid+1, high);
            ci += merge(arr, low, mid, high);
        }
        return ci;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        return mergesort(arr, 0, N-1);
    }
