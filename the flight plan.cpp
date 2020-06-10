#include<bits/stdc++.h>
using namespace std;
vector <int> *adj;
vector <int> back;
int *arr;

bool *visited;
void bfs(int s,int f)
{ 
   queue <int> q;int dist[100001];
   visited[s]=true;
   dist[s]=1;arr[s]=-1;
   q.push(s);
    while(!q.empty())
    {
       s=q.front();q.pop();
       for(int i : adj[s] )
        {
           if(!visited[i])
         { visited[i]=true;
           q.push(i);
           dist[i]=dist[s]+1;
            arr[i]=s;
         }
        }
    }
 cout<<dist[f]<<endl;int i=f;back.push_back(i);
 while(arr[i]!=-1)
 {
    back.push_back(arr[i]);
 // cout<<" "<<arr[i];
    i=arr[i];
 }
for(int i=back.size()-1;i>=0;i--)
 cout<<back[i]<<" ";
 

}
int main()
{
   int n,m,t,c,u,v,x,y;
   cin>>n>>m>>t>>c;
   adj=new vector <int> [n+1];
   visited=new bool [n+1];
   arr=new int [n+1];
   for(int i=0;i<n;i++)
    arr[i]=0;
   while(m)
   {  cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
       m--;
   }   
   cin>>x>>y;
   bfs(x,y);

   


	return 0;
}
