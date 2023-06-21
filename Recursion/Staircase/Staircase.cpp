int staircase(int n){
    if(n==0){
        return 1;
    }

    //stauircase(0)+1
    if(n==1){
        return 1;
    }

    //staircase(1)+staircase(0)
    if(n==2){
        return 2;
    }

    // if n=3 (staircase(2)+staircase(1)+staircase(0))    //4                    1 1 1     1 2    2 1    3
    // if n=4 (staircase(3)+staircase(2)+staircase(1))    //4+2+1+1=7    1 1 1 1     2 2     3 1    1 3    2 1 1.......
    // if n=5 (staircase(4)+staircase(3)+staircase(2))    //7+4+2=13
    // n=6         24
    // n= 7        44

//calculating current step it would be either 1 2 or 3 and rest recursion would solve
    return (staircase(n-1)+staircase(n-2)+staircase(n-3));
}
