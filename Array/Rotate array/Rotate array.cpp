#include <bits/stdc++.h>

void rotate(int *input, int d, int n)
{
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            // when it goes >=n then %n it automatically shifts to start of temp index 0 1 2...till k
            temp[(i-d+n)%n]=input[i];
        }
        
        for(int i=0;i<n;i++){
            input[i]=temp[i];
        }
}
