// Function to find equilibrium point
// a: input array
// n: size of array
// output is for 1 based indexing
int equilibriumPoint(long long a[], int n) {
    int sum=0;
    if(n==1)    
        return 1;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int lsum=0;
    for(int i=0;i<n;i++){
        if(lsum==sum-a[i])
            return i+1;
        lsum+=a[i];
        sum-=a[i];
    }
    return -1;
}
