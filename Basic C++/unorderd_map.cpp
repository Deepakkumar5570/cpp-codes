#include<iostream>
using namespace std;
#include<unordered_map>
int main(){
    unordered_map<string ,int > m;


    m.emplace("tv", 1000);
    m.emplace("vv", 1000);
    m.emplace("cv", 1003);
    m.emplace("kv", 1002);
    for(auto p : m){
        cout<< p.first << " "<< p.second<< endl;
    }
     

    //   // for founding an element
    // if(m.find("laptop") !=m.end()){
    //     cout<< "found\n";
    // } else{
    //     cout<<"not found\n"; 
    // }
    return 0; 
}