// This function rotate array by D elements
// arr: input elements
// n: size of the array
void rotateArr(int arr[], int d, int n){
    
    // first reverse the d elements
    reverse(a, a+d);
    
    // now reverse the last n-d elements
    reverse(a+d, a+n);
    
    // finally, reverse the whole array
    reverse(a, a+n);
    
}
