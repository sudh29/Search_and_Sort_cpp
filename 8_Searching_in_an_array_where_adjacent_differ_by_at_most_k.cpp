// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    // for(int i=0;i<n;i++){
    //     if(arr[i]==x) return i;
    // }
    // return -1;
    
    // optimized
    int i=0;
    while(i<n){
        if(arr[i]==x) return i;
        i=i+max(1,(arr[i]-k)/x);
    }
    return -1;
}    	
