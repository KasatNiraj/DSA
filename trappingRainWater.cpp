// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){

    int lmax[n];
    int rmax[n];
    int rl=INT_MIN;
    int trap=0;
    //running a loop to find rmax array
    for(int i=n-1;i>=0;i--){
        if(arr[i]>rl){
            rl=arr[i];
            rmax[i]=rl;
        }
        else{
            rmax[i]=rl;
        }
    }

    rl=INT_MIN;
    
    //running loop to find left max
    for(int k=0;k<n;k++){
        if(arr[k]>rl){
            rl=arr[k];
            lmax[k]=rl;
        }
        else{
            lmax[k]=rl;
        }
    }
    
    //running loop to find water trapped
    for(int j=0;j<n;j++){
        trap+=(min(lmax[j],rmax[j]) - arr[j]);
    }
    
    return trap;
    
}
