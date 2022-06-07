#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
       long long int low=0;
        long long int mid=0;
        long long int high=n-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid++],arr[low++]);
            }
            else if(arr[mid]==1){
                mid++;
            }
            else if(arr[mid]==2){
                swap(arr[mid],arr[high--]);
            }
        }
}