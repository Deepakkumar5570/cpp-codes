#include<iostream>
using namespace std;
#include<map>
int main(){
    map<string ,int > m;
    m["tv"] = 100;
    m[ "laptop"] = 200;
    m[ "pen"] = 10 ;
    m["i phone"] = 100000;
    for(auto p : m){
        cout<< p.first << " "<< p.second<< endl;
    }
     

      // for founding an element
    if(m.find("laptop") !=m.end()){
        cout<< "found\n";
    } else{
        cout<<"not found\n"; 
    }
    return 0; 
}