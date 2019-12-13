#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define max 100


void QuickSort(int *arr,const int left,const int right){

    if(left < right){
        int i = left;
        int j = right+1;
        int pivot = arr[left];
        do{
            do{
                i++;
            }while(arr[i] < pivot);
            do{
                j--;
            }while(arr[j] > pivot);
            if(i < j)
                swap(arr[i],arr[j]);
        }while(i < j);
        swap(arr[left],arr[j]);
        QuickSort(arr,left,j-1);
        QuickSort(arr,j+1,right);
    }
}

int main(void)
{
    int arr[max];
    int total;
    cin>>total;
    for(int i = 0;i < total;i++){
        int num;
        cin>>num;
        arr[i] = num;
    }
    QuickSort(arr,0,14);//length() for string.

    // Output arr for checking
    for(int i = 0;i < total;i++){
        cout<<arr[i]<<' ';
    }

}
//test case:
//15
//3 44 38 5 47 15 36 26 27 2 46 4 19 50 48
