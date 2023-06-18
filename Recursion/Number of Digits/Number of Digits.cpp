int count(int n,int counter=0;){
    if(n==0){
        return counter;
    }
    n=n/10;
    counter++;
    count(n,counter);
}
