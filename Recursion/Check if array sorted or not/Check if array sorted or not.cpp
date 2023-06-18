#include <iostream>
using namespace std;

bool print(int *arr,int n){
    if(n==1){
        return true;
    }
    // if(arr[n-1]<arr[n-2]){
    //     return false;
    // }

    int s =arr[n-1]>arr[n-2];
    return s*print(arr,n-1);

    //s=arr[0]<arr[1]
}

int main() {
    int arr[5]={1,2,4,9,66};
    cout<<print(arr,5);
}
