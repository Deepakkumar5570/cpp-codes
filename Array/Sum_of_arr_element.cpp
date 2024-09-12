#include<iostream>
using namespace std;

int arrSum(int arr[],int size){
    int sum=0;
    for(int i =0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"sum of arr element is:"<<sum;
}

int main(){
    int arr[]={10,20,40,30};
    int size=4;
    arrSum(arr,4);
    return 0;
}