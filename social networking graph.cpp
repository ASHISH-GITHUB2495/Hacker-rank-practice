//Demontration for bfs of a graph
#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
vector <int> *adj;
bool *visited;
int *dist;
void bfs(int n,int s,int f)
 { // visited={0};
 	queue <int> q;
 	q.push(s);
 	dist[s]=0;
 	visited[s]=true;
 	 //cout<<s<<" ";
 	 while(!q.empty())
 	  { int curr=q.front();
 	      q.pop();
 	  	for(auto i : adj[curr])
 	  	  {
 	  	  	if(!visited[i])
 	  	  	   {
 	  	  	   	visited[i]=true;
 	  	  	   //	cout<<i<<" ";
 	  	  	   	  q.push(i);
 	  	  	   	  dist[i]=dist[curr]+1;
					}
			 }
	   }int count=0;
	   for(int i=0;i<n;i++)
	     if(dist[i]==f)
	       count++;
	       
	   cout<<count<<endl;
 }
int main()
{
	int n,e,u,v;
	cin>>n>>e;
	adj=new vector <int> [n];
	visited=new bool [n];
      dist=new int [n];
	 for(int i=0;i<n;i++)
	   visited[i]=false;
	   
	for(int i=0;i<e;i++)
	  { cin>>u>>v;
	  adj[u].push_back(v);
	 adj[v].push_back(u);
	  }
	  int m;
	  cin>>m;vector <int> p1;
	   vector <int> p2;
	  for(int i=0;i<m;i++)
	   {
	   	 cin>>u>>v;
	   	 p1.push_back(u);
	   	 p2.push_back(v);
	   	
	   }
	   for(int i=0;i<m;i++)
	     { 
		  for(int j=0;j<n;j++)
	       {visited[j]=false;
	        dist[j]=0;
		   }
		 bfs(n,p1[i],p2[i]);
		// cout<<"you\n";
		 }
	  return 0;
}
