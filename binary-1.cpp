#include <iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else if (key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }

    return ans;
}

int main(){
    int even[11] = {1,2,6,6,6,6,6,6,6,6,7};

    cout << "First Occurrence of 6 is at index " << firstOcc(even, 11, 6) << endl;
    cout << "last Occurrence of 6 is at index " << lastOcc(even, 11, 6) << endl;

    return 0;

}