// Function to rearrange the elements in O(1) extra space
// arr: input array
// n: size of array
void arrange(long long arr[], int n) {
    // changing the array elements
    for (int i=0; i < n; i++) 
        arr[i] += (arr[arr[i]]%n)*n; 
  
    // since we have multiplied each element with n
    // We should divide it by n too to get the original element
    for (int i=0; i<n; i++){ 
        arr[i] /= n; 
    }
    
    for (int i=0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }   
}
