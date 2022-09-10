class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *temp = new int[2]; 
        int idx;
        int sum1=0;
        int sum2=0;
        for(int i=1;i<=n;i++){
            sum1 = sum1+i;
        }
        for(int i=0;i<n;i++){
            sum2 = sum2+arr[i];
        }
        for(int i=0;i<n;i++){
            idx=abs(arr[i])-1;
            if(arr[idx]>=0){
                arr[idx]=-arr[idx];
            }
            else{
                temp[0]=abs(arr[i]);
                break;
            }
        }
        sum2=sum2-temp[0];
        temp[1]=sum1-sum2;
        return temp;
    }
};
