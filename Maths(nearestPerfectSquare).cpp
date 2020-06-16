bool isperfect(int no);//to check if number is perfectsquare
//function to find the nearest perfect square
//if no is perfect square still find nearest perfect square
int nps(int no){
    int aboveN=-1;
    int belowN=-1;
    int n=no;
    if(isperfect(no)&& no!=n){
        return no;
    }
    //to find no greater than given no
    while(true){
        if(isperfect(no) && no!=n){
            aboveN=no;
            break;
        }
        else{
            no++;
        }
    }
    
    no=n;
    //to find no less than given no
    while(true && no>=0){
        if(isperfect(no) && no!=n){
            belowN=no;
            break;
        }
        else
            no--;
    }
    
    if(aboveN-no>no-belowN)
        return belowN;
    else if(aboveN-no==no-belowN)
        return aboveN;
    return aboveN;
}
bool isperfect(int no){
    if(sqrt(no)-floor(sqrt(no))==0)
        return true;
    return false;
}
