// L and R are input array
// maxx : maximum in R[]
// n: size of array
// arr[] : declared globally with size equal to maximum in L[] and R[]
int maxOccured(int L[], int R[], int n, int maxx){

    int arr[maxx+2];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int max=0;
    int res=0;
    for(int i=0;i<maxx+2;i++){
        arr[i]+=arr[i-1];
        if(max<arr[i]){
            max=arr[i];
            res=i;
        }
    }
    return res;
}
