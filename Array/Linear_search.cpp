#include<iostream>
using namespace std;
int linearSearch(int arr[] ,int size,int target){
    
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;

        }
    }
    return -1;
    
}
int main(){
    int size;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    
    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int target;
    cout<<"Enter the target Element:";
    cin>>target;
    cout<<linearSearch(arr,size,target);
    return 0;
}