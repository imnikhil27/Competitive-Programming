#include <bits/stdc++.h>
#define SEIVE_SIZE 1000000
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define inf 999999999999999999
#define pb push_back
#define test cin>>t; for(long long test_num=1;test_num<=t;test_num++)
#define input_loop long long n;cin>>n;vector<long long>arr(n);for(long long i=0;i<n;i++)cin>>arr[i]
#define output_loop for(long long i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl
#define mid(s,e) (s+(e-s)/2)

using namespace std;

int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        long long n,u,i;
        cin>>n>>u;
        vector<long long>arr(n,0);

        while(u--)
        {
            long long l,r,val;
            cin>>l>>r>>val;
            arr[l]+=val;
            if(r+1<n)
                arr[r+1]-=val;
        }
        long long temp=0;
        for(i=0;i<n;i++)
            {
                
                temp+=arr[i];
                arr[i]=temp;
            }
        long long q;
        cin>>q;
        while(q--)
        {
            long long a;
            cin>>a;
            cout<<arr[a]<<endl;

        }


    }

    return 0;
}
