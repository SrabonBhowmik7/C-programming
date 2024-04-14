#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n,i,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        q.push(m);
    }
    cout<<"Queue front el"<<endl;
    // cout<< q.front()<<endl;
    while(!q.empty())
    {
        int item=q.front();
            q.pop();
            cout<<item<<endl;
    }
    return 0;
}
