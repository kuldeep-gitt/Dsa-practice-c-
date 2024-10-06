#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    while (start <= end){
        if(arr[mid] == key){
            return mid;
        }

    // go to right wala part

    if(key > arr[mid]){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }

    mid = (start + end)/2;
    }
}

int main(){
    int even[6] ={2,4,6,8,12,18};
    int odd[5] ={3,7,11,14,16};

    int evenIndex = binarySearch(even,6,8);
    cout <<"Index of 8 is " << evenIndex <<endl;
    int oddIndex = binarySearch(odd,5,11);
    cout <<"Index of 11 is " << oddIndex <<endl;
    return 0;
}