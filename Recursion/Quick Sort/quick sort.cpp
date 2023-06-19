int partitionArray(int input[], int start, int end) {
    int pivot = input[end];

    int i = start-1;


    for(int j=start;j<end;j++){
        if(input[j]<pivot){
        i++;
        swap(input[i],input[j]);
        }
    }
    swap(input[i+1],input[end]);
    return i+1;

	

	
}

void quickSort(int input[], int start, int end) {
	if(start>=end){
		return;
	}

	int pi = partitionArray(input,start,end);

	quickSort(input,start,pi-1);
	quickSort(input,pi+1,end);
}
