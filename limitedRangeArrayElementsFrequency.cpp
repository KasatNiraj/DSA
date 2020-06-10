// Function to count frequencies of elements in the array
// arr: input array
// n: size of array
// space-O(1)
// time- O(N)
void printfrequency(int arr[], int n)
{ 
    //to make all elements in the range 0 to n-1
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-1;
    }
    //storing the frequency of elements using mathematical formula
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]/n<<" ";
    }
} 
