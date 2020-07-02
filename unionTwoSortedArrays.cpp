//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> res;
    int i=0,j=0;
    while(i<n && j<m){
        if(res.empty()==false){ //checking this condition first to avoid 
        if(arr1[i]==res.back()){ //error in res.back() if res is empty
            i++;
            continue;
        }
        if(arr2[j]==res.back()){
            j++;
            continue;
        }
        }
        if(arr1[i]<arr2[j]){
                res.push_back(arr1[i]);
                i++;
            }
        else{
            res.push_back(arr2[j]);
            j++;
        }
    }
    
    //checking & filling if there are elements left in the first array
    while(i<n){
        if(arr1[i]==res.back()){
            i++;
            continue;
        }
        else{
            res.push_back(arr1[i]);
            i++;
        }    
    }
    
    //checking & filling if there are elements left in the right array
    while(j<m){
        if(arr2[j]==res.back()){
            j++;
            continue;
        }
        else{
            res.push_back(arr2[j]);
            j++;
        }    
    }
        
    return res;
}
