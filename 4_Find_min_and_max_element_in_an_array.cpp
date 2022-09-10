pair<long long, long long> getMinMax(long long a[], int n) {
    long long min_val =  INT_MAX;
    long long max_val =  INT_MIN;
    for(int i ; i<n; i++){
        if (a[i]>max_val){
            max_val=a[i];
        }
        if (a[i]<min_val){
            min_val=a[i];
        }
    }
    return make_pair(min_val,max_val);
