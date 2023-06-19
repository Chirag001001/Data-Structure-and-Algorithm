void merge(vector <int> &arr,int l,int mid,int r);

void mergeSort(vector<int>& arr, int l, int r) {
    if(l>=r){
        return;
    }

    int mid = (l+r)/2;

    // cout<<mid<<' '<<l<<" "<<r<<endl;
    mergeSort(arr,l,mid);
    mergeSort(arr, mid+1,r);
    merge(arr,l,mid,r);
}

void merge(vector <int> &arr,int l,int mid,int r){
    vector <int> v1;
    vector <int> v2;

    int n1=mid-l+1;
    int n2= r-mid;

    // cout<<n1<<" "<<n2<<endl;

    for(int i=0;i<n1;i++){
        v1.push_back(arr[l+i]);
    }

    for(int i=0;i<n2;i++){
        v2.push_back(arr[mid+i+1]);
    }

  // for(int i=0;i<v1.size();i++){
  //   cout<<v1[i]<<" ";
  // }cout<<endl;
    

    int ptr1=0;
    int ptr2=0;
    int ptr=l;

    while(ptr1<n1 && ptr2<n2){
        if(v1[ptr1]<=v2[ptr2]){
            arr[ptr]=v1[ptr1];
            ptr++;
            ptr1++;
        }

        if(v1[ptr1]>v2[ptr2]){
            arr[ptr]=v2[ptr2];
            ptr++;
            ptr2++;
        }
    }

    while(ptr1<n1){
        arr[ptr]=v1[ptr1];
        ptr++;
        ptr1++;
    }

    while(ptr2<n2){
        arr[ptr]=v2[ptr2];
        ptr++;
        ptr2++;
    }
}
