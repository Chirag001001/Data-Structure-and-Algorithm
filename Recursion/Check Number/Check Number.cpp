bool checkNumber(int input[], int size, int x) {
  if(size==0){
    return false;
  }

  // bool sm = input[size-1]==x;

  // return (sm+checkNumber(input, size-1,x));


  bool sm =input[0]==x;
  return (sm+checkNumber(input+1, size-1,  x));

  

}
