#include <bits/stdc++.h>

int arrayRotateCheck(int *input, int size)
{
    int idx=0;
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        // cout<<mini<<endl;
        if(mini>input[i]){
            mini=input[i];
            idx =i;
        }
    }

    return idx;
}
