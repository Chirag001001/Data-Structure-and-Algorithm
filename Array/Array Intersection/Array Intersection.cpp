#include <vector>
#include <bits/stdc++.h>

void help(vector <int> num1, vector <int>num2,int n,int m);


void intersection(int *arr1, int *arr2, int n, int m) 
{

    vector <int> num1;    vector <int> num2;

    for(int i=0;i<n;i++){
        num1.push_back(arr1[i]);
    }

    for(int i=0;i<m;i++){
        num2.push_back(arr2[i]);
    }

    help(num1,num2,n,m);
}


void help(vector <int> num1, vector <int>num2,int n,int m){
    int maxi1 =0;
    int maxi2=0;


    for(int i=0;i<n;i++){
        maxi1=max(maxi1,num1[i]);
    }

    for(int i=0;i<m;i++){
        maxi2=max(maxi2,num2[i]);
    }

    vector <int> idx1(maxi1+1,0);    vector <int> idx2(maxi2+1,0);

    for(int i=0;i<n;i++){
        idx1[num1[i]]++;
    }

    for(int i=0;i<m;i++){
        idx2[num2[i]]++;
    }

    int maxi=min(maxi1,maxi2);
    // cout<<maxi<<endl;
    vector <int> ans;

    for(int i=0;i<=maxi;i++){
        // cout<<idx1[i]<<" "<<idx2[i]<<endl;
        if(idx1[i]!=0 && idx2[i]!=0){
            int x = min(idx2[i],idx1[i]);
            for(int j=0;j<x;j++){
                ans.push_back(i);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
