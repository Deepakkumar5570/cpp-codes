#include<iostream>
using namespace std;
int factorial(int n){
    if( n==0){  //base case
        return 1;
    
    }
    return n*factorial(n-1);
    
}
int main(){
    int n;
    cout<<"enter number limit:";
    cin>>n;
    if(n<0){
        cout<<"factorial is not define for this number:";
    }
    else{
    cout<<"factoril of " <<n<<" number is:"<<factorial(n);
    }
    return 0;
}
