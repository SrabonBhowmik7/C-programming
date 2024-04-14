#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    int n,m,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        s.push(m);
    }
    cout<<"Stack"<<endl;
    while(!s.empty())
    {
        int item=s.top();
        s.pop();
        cout<<item<<endl;
    }
}
