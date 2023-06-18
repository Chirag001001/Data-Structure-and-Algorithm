#include <iostream>
using namespace std;

bool checkNumber(char input[], int size) {
    if(size==0|| size==1){
      return true;
    }

    checkNumber(input-1,size-1);
    if(input[0]==input[size-1]){
      return true;
    }
    return false;


}

int main() {
    char arr[5]={'a','c','a','c','a'};
    cout<<checkNumber(arr,5);
}
