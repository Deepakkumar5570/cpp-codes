#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(100);
    s.insert(16);
    s.insert(11);
    s.insert(10);  

    cout<<"lower bound = "<<*(s.lower_bound(11))<<endl;
    cout<<"upper bound = "<<*(s.upper_bound(11))<<endl;
     
    
    for( auto val : s){
        cout<<val<<" ";
    }
    return 0;
}
