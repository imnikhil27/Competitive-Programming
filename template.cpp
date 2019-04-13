#include <bits/stdc++.h>
#define SEIVE_SIZE 1000000
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define inf 999999999999999999
#define pb push_back
#define test cin>>t; for(int test_num=1;test_num<=t;test_num++)
#define input_loop int n;cin>>n;vector<int>arr(n);for(int i=0;i<n;i++)cin>>arr[i]
#define output_loop for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl
#define mid(s,e) (s+(e-s)/2)

using namespace std;

//Sieve for a size SEIVE_SIZE
vector<bool> sieve(SEIVE_SIZE, true);

//Generates sieve for range 2 to n
void buildSieve(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false;
            }
        }
    }
}

int main()
{

    return 0;
}
