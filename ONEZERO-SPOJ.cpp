#include <bits/stdc++.h>
using namespace std;

void bfs(int n)
{

    queue<pair<string,int>> q;
    q.push(make_pair("1",1));

    while(1)
    {   int rem;
        pair<string,int> temp=q.front();
        q.pop();
        rem=temp.second;
        if(temp.second%n==0)
            {
                cout<<temp.first<<endl;
                return;
            }

        q.push(make_pair(temp.first+"0",  ((rem*(10%n))%n)%n ));
        q.push(make_pair(temp.first+"1",((rem*(10%n))%n+1%n)%n ));


    }
   
}


int main() {

int t;
cin>>t;
while(t--)
{
 int n;
 cin>>n;
 bfs(n);

}


return 0;
}
