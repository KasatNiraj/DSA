/ Function to reverse the array in groups
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    for(long long i = 0;i<n;){ //iterating over all the elements
        //There can be two conditions
        //When we have k elements from our current position
        //When k elements from current elements don't exist. In such case just reverse the remaining elements
        if(i+k < n){ //If we have k elements available

        reverse(mv.begin()+i, mv.begin()+(i+k)); //just reverse elements from i till i+k
        i+=k; //increment i so as to avoid problem of double reversal
        }
        else{//If we don't have k elements available
            reverse(mv.begin()+i, mv.end());  //Reverse from current position till end
            i+=k;
        }
    }
    
    return mv;
}
