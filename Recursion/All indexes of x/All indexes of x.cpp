#include <iostream>
#include <vector>

using namespace std;
vector <int> a(int input[], int size, int x, vector <int> &v, int counter);

int allIndexes(int input[], int size, int x, int output[]) {

  vector <int> v;

  a(input,size,x,v,0);

  for(int i=0;i<v.size();i++){
    // cout<<v[i]<<" ";
    output[i]=v[i];
  }

  return (v.size());

}

vector <int> a(int input[], int size, int x, vector <int> &v, int counter){
    if(size==0){
    return v;
  }

  if(input[0]==x){
    v.push_back(counter);
  }
  else{
    
  }
  a(input+1, size-1,x, v, counter+1);
  return v;
}
