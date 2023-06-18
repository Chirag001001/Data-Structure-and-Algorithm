int power(int x, int n) {

  if(n==0){
    return 1;
  }
  int prev_output = power(x,n-1);
  return prev_output*x;
}
