int multiplyNumbers(int m, int n) {
    if(n==1){
        return m;
    }

    int s=multiplyNumbers(m,n-1);
    return s+m;

}


