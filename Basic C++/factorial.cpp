#include<iostream>
using namespace std;
int fact(int n){
    
    if(n==0){
        return 1;

    }
    // return n*fact(n-1);     //for printng factorial
    // return n+fact(n-1);     //for  printing sum   
}
int main(){
    int a=5;
    cout<<fact(a);
    cout<<endl;
    cout<<a+1;
    return 0;
}
