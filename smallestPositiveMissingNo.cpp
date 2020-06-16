int segregrate(int arr[],int n);//segregrate function
int mpn(int arr[],int size); //minimum missing positive number
// Function to find first smallest positive missing number in the array
// smallest positive number will never be greater than sizeOfArray+1
// Time-O(N)
// Space- O(1)
int missingNumber(int arr[], int n) { 
    //function to segregrate negative and positive array elements
   int j=segregrate(arr,n);
   
    //function to find minimum missing positive value   
    //passed partial array from where positive elements start
    return mpn(arr+j,n-j);
} 
int segregrate(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    //j is the index from where positive elements in
    //sorted array will start after segregrating
    return j;
}
int mpn(int arr[],int size){
    // Mark arr[i] as visited by making arr[arr[i] - 1] negative. 
	// Note that 1 is subtracted because index start 
	// from 0 and positive numbers start from 1 
   for(int i=0;i<size;i++){
       if((abs(arr[i])-1<size) && (arr[abs(arr[i])-1]>0)){
           arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
       }
   }
   //return the first positive index
   for(int i=0;i<size;i++){
       if(arr[i]>0)
            return i+1;//1 is added because array index starts from 0
   }
   //in case all array elements are positive and differ by 1
   return size+1;
}
