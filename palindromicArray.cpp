bool isPalindrome(int n);//checking for each array element
int palindromicArray(int arr[], int n)
{  
    for(int i=0;i<n;i++){ 
        if(!isPalindrome(arr[i])) //checking for each array element
            return 0;
    }
    return 1;
}
bool isPalindrome(int n){
    int divisor=1;
    while(n/divisor>=10)
        divisor*=10;
    while(n!=0){
        int leading=n/divisor;
        int trailing=n%10;
        if(leading!=trailing) //if last and first digit are not same
            return false;
        n=(n%divisor)/10; //Removing the leading and trailing digit from number 
        divisor=divisor/100; //Reducing divisor by a factor of 2 as 2 digits are dropped 
    }
    return true;
}
