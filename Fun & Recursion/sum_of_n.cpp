#include<iostream>
using namespace std;
int printhello(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
     sum=sum+i;
    }
    return sum;
    
}
int main(){
    int n;
    cout<<"enter number limit:";
    cin>>n;
    cout<<"sum of n number is:"<<printhello(n);
    return 0;
}
