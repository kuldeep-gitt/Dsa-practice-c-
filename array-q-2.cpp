#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 4, 4, 4};
    int size = 4;

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    cout<<" The sum of  all element an array "<<  sum << endl;

    return 0;
    
}