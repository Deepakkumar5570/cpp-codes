#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Numbers of Row:";
    cin>>n;
    int m;
    cout<<"Enter Numbers of Columns:";
    cin>>m;

    for(int i = 1; i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"j"<<" "; // or we can print " * "
        }
        cout<<endl;
    }
    return 0;
}