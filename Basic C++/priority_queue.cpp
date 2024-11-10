#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // queue<int> q;


    // for  decending order element 
    // priority_queue<int> q;

    // for acending order element
    priority_queue<int , vector<int> ,greater<int>> q;
    q.push(1);
    q.push(10);
    q.push(7);
    q.push(8);
    while (!q.empty())
    {
        cout << q.top() << " ";

        // for queue
        //  cout<< q.front()<< " ";

        q.pop();
    }

    cout << endl;
    cout << " size: " << q.size();
    return 0;
}
