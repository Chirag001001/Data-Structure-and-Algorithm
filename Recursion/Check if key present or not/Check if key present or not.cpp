bool checkNumber(int input[], int size, int x) {
  if(size==0){
    return false;
  }

  // bool sm = input[size-1]==x;

  // return (sm+checkNumber(input, size-1,x));

  bool sm =input[0]==x;
  return (sm+checkNumber(input+1, size-1,  x));

  

}

// #include <iostream>
// using namespace std;

// int checkNumber(int input[], int size, int x,int counter=0) {
//   if(size==0){
//     return -1;
//   }

//   if(input[0]==x){
//     return counter;
//   }
//   counter++;
//   return (checkNumber(input+1, size-1,  x,counter));

// }

// int main() {
//     int arr[6]={1,2,4,9,66,9};
//     cout<<checkNumber(arr,6,9);
// }
