#include<iostream>
using namespace std;
int binaryToDecimal(int binNum){
    int ans =0, pow =1;
    while(binNum > 0){
        int rem = binNum % 10;
        ans +=rem * pow;
        binNum /=10;
        pow *= 2;
    }
    return ans;
}
int main(){
    int x;
    cout<<"Enter Binary Number :";
    cin>>x;
    cout<<"Decimal Numer is :"<<binaryToDecimal(x)<<endl;
    return 0;
}