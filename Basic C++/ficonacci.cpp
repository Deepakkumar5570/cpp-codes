#include<iostream>
using namespace std;
int fib(int n){
    
    if(n==0 || n==1){
        return 1;

    }
     return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    cout<<"enter you number:";
    cin>>a;
    cout<<fib(a);
    cout<<endl;
    
    return 0;
}
