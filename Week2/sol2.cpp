#include<bits/stdc++.h>
using namespace std;
void io ()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int tc = arr[i]+arr[j];
            vector<int>::iterator it;
            it = find(arr.begin()+j,arr.end(),tc);
            if(it!=arr.end())
            {
                cout<<i<<" "<<j<<" "<<it-arr.begin()<<endl;
                return;
            }
        }
    }
    cout<<"indices not present"<<endl;
}
int main()
{
    io();
    solve();
}