#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector <int> adj[10001];
int visited[10001];
int dist[10001];
void BSF(int s)
{
 queue <int> q;
 q.push(s);
 visited[s]=1;
 dist[s]=0;
  while(!q.empty())
 { int curr=q.front();
    q.pop();
 	for(int i=0;i<adj[s].size();i++)
 	{
 		if(visited[adj[s][i]]!=1)
 		{
 			visited[adj[s][i]]=0;
 			q.push(adj[s][i]);
 			dist[adj[s][i]]=dist[curr]+1;
		 }
	 }
 }


return ;

}

int main()
{
	int t;
	cin>>t;
	while(t)
	{ int n,m,u,v,i;
	  cin>>n>>m;

	   for(i=0;i<n;i++)
	    {   adj[i].clear();
			visited[i]=0;
		}
	   for(i=0;i<m;i++)
	   { cin>>u>>v;
	   u=u-1;v=v-1;
	     adj[u].push_back(v);
		  adj[v].push_back(u);
	   }
        BSF(0);
		cout<<dist[n-1];
		t--;
	}return 0;
}
