#include <iostream>
using namespace std;
int binarySearch(int input[], int size, int element) {
    int si=0;
    int en = size -1;

    while(si<=en){
        int mid = (si+en)/2;

        if(input[mid]==element){
            return mid;
        }

        else if(input[mid]>element){
            en = mid-1;
        }

        else{
            si=mid+1;
        }
    }

    return -1;
}

