int max_sum(int arr[],int n)
{
    int cum_sum=0;
    int curr_value=0,next_value=0;
    //calculating sum of all array elements
    for(int i=0;i<n;i++)
        cum_sum+=arr[i];
    //calculating the desired sum for original array
    for(int i=0;i<n;i++)
        curr_value+=i*arr[i];
    int res=curr_value;
    //calculating the desired sum for rotated configurations
    for(int i=1;i<n;i++){
        next_value=curr_value-(cum_sum-arr[i-1]) + arr[i-1]*(n-1);
        curr_value=next_value;
        res=max(res,curr_value);
    }
    return res;
}
