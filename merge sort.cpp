#include<bits/stdc++.h>
using namespace std;

void MergeSort(int *arr,const int n){
    int *tempList = new int[n + 1];


    delete [] tempList;
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
    MergeSort(arr,total);
    /*
    //Output arr for checking
    for(int i = 0;i < total;i++)
        cout<<arr[i]<<' ';
    */
}
