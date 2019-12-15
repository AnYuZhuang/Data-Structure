#include<bits/stdc++.h>
using namespace std;

//merge two subArr.
void Merge(int *arr,int m,int lef,int rig){
    int l = m - lef + 1;//left arr size.
    int r = rig - m;//right arr size.
    int Left[l];
    int Right[r];
    for(int i = 0;i < l;i++){//copy data to new left arr.
        Left[i] = arr[l + i];
    }
    for(int j = 0;j < r;j++){//copy data to new right arr.
        Right[j] = arr[m + 1 + j];
    }
    int idx_l = 0;
    int idx_r = 0;
    int idx_mArr = lef;//index of mergedArr.
    while(idx_l < l && idx_r < r){
        if(Left[idx_l] <= Right[idx_r]){
            arr[idx_mArr] = Left[idx_l];
            idx_l++;
        }
        else{
            arr[idx_mArr] = Right[idx_r];
            idx_r++;
        }
        idx_mArr++;
    }
    while(idx_l < l){
        arr[idx_mArr] = Left[idx_l];
        idx_l++;
        idx_mArr++;
    }
    while(idx_r < r){
        arr[idx_mArr] = Right[idx_r];
        idx_r++;
        idx_mArr++;
    }

}

//divide arr.
void MergeSort(int *arr,int left,int right){
    if(left < right){
        int middle = left+(right - left)/2;//?
        MergeSort(arr,left,middle);
        MergeSort(arr,middle+1,right);
        Merge(arr,middle,left,right);

    }



}

int main()
{
    int total;
    cin>>total;
    int arr[total];

    for(int i = 0;i < total;i++){
        int num;
        cin>>num;
        arr[i] = num;
    }
    MergeSort(arr,0,total-1);

    //Output arr for checking
    for(int i = 0;i < total;i++)
        cout<<arr[i]<<' ';

    return 0;
}
