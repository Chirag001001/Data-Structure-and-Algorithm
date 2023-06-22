int pairSum(int *arr, int n, int num)
{
	int counter=0;

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==num){
				counter++;
			}
		}
	}
	return counter;
}
