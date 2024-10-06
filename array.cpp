 #include<iostream>
 using namespace std;

 void printArray(int arr[],int size){
    cout<<"printing the arry"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    

 }

 int main(){
    //int number[15]={5,6,7,8,9};
    int number2[12];
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    cout<<"element" << n <<"number"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>number2[i];
    }
    
    //int n =15;
    printArray(number2,n);

    return 0;

 }