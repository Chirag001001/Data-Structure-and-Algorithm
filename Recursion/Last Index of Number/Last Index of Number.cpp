#include <iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
  
  if(size==0){
    return -1;
  }
  if(input[0]==x){
    return 0;
  }
  int sm = lastIndex(input+1,size-1,x);
  if(sm!=-1){
    return (sm+1);
  }
  else{
    return -1;
  }
}

// int lastIndex(int input[], int size, int x,int counter=0) {
  
//   if(size==0){
//     return -1;
//   }

// // cout<<input[size-1]<<" ";

//   if(input[size-1]==x){
//     return size-1;
//   }
//   counter--;
//   return (lastIndex(input, size-1,  x,counter));

// }



