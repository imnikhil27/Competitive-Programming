#include <bits/stdc++.h>
using namespace std;

vector< vector<long long> > graph;
vector<long long>visited;


bool bfs(long long s,long long n)
{
    queue<long long>q;
    q.push(s);
    visited[s]=1;

    while(!(q.empty()))
    {
            long long temp=q.front();
            q.pop();
            
            for(auto i:graph[temp])
            {   
                if(visited[i]==-1)
                {
                    visited[i]=1-visited[temp];
                    q.push(i);
                }
               else if(visited[i]==visited[temp])     
                        return false;

            }

    }

    return true;
}

int main() {
    long long t;
    cin>>t;
    for(long long j=1;j<=t;j++) {
      
      long long n,e,i;
      cin>>n>>e;
      visited.assign(n+1,-1);
      graph.assign(n+1,vector<long long>());
      while(e--)
      {
        long long s,d;
        cin>>s>>d;
        graph[s].push_back(d);
        graph[d].push_back(s);
      }

        for(i=1;i<=n;i++)
        {
                if(visited[i]==-1)
                   {
                        bool ans=bfs(i,n);
                        if(ans==false)
                           break;
                   } 

        }

        cout<<"Scenario #"<<j<<":"<<endl;
        if(i<=n)
            cout<<"Suspicious bugs found!"<<endl;
        else
            cout<<"No suspicious bugs found!"<<endl;

    }

}
