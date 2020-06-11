// Function to find subarray with maximum sum
// arr: input array
// n: size of array
//this solution works well with negative numbers also
//space- O(1)
//time- O(N)
int maxSubarraySum(int arr[], int n){
    
   int max_so_far = arr[0]; 
   int curr_max = arr[0]; 
  
   for (int i = 1; i < n; i++) 
   { 
       curr_max=max(arr[i],curr_max+arr[i]);
       max_so_far=max(max_so_far,curr_max);
   } 
   return max_so_far; 

}
