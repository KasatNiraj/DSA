/* Function prints Intersection of arr1[] and arr2[] 
N is the number of elements in arr1[] 
M is the number of elements in arr2[] 
Return the array
*/
vector<int> printIntersection(int arr1[], int arr2[], int n, int m) 
{ 
    vector<int> res;
    int i=0,j=0;
    while(i<n && j<m){
        if(!res.empty()){
            if(arr1[i]==res.back()){
                i++;
                continue;
            }
            if(arr2[j]==res.back()){
                j++;
                continue;
            }
        }
        if(arr1[i]==arr2[j]){
            res.push_back(arr1[i]);
        }
        else if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
    
    }

    if(res.empty())
        res.push_back(-1);
    return res;
}
