#include <vector>
int help(vector <int> nums);
int findDuplicate(int *arr, int n)
{
    vector <int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }

    int k =help(v);
    return k;
}

int help(vector <int> nums){
        vector <int> v (nums.size()+1,0) ;

        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }

        for(int i=0;i<v.size();i++){
            if(v[i]>=2){
                return i;
                break;

            }
        }
        return -1;
}
