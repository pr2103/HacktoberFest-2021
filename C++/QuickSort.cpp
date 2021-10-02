#include<bits/stdc++.h>
using namespace std;

// This is a swap function for swaping two values 
void swap(int arr[], int i , int j){
    int temp =arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}

// This function is used to create divide the array
int partition(int arr[] , int l , int r ){
    int pivot = arr[r];
    int i= l-1;
    for(int j = l; j<r ; j++){
        if (arr[j]< pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr, i+1,r);
    return i+1;
}

// The quicksort function which recursively sorts the array
void quicksort(int arr[], int l, int r){
    if (l<r){

        int pi= partition(arr,l,r);
        quicksort(arr, l, pi-1);
        quicksort(arr,pi+1,r);

    }
}

int main(){
    
    // int arr[5]={10,4,5,8,1};             Test Case
    // quicksort(arr,0,4);
    // for (int i=0; i<5;i++){
    //     cout << arr[i]<< " ";
    // }
    // cout << endl;

    return 0;
}

// OUTPUT:- 1 4 5 8 10