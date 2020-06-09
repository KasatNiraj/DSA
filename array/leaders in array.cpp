/ Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n){
    int max=arr[n-1];
    vector<int> temp;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max){
            max=arr[i];
            
            temp.push_back(max);
            
            
        }
    }
    reverse(temp.begin(), temp.end()); 
    
    
    return temp;
    
     
    
}
