#include<bits/stdc++.h>
using namespace std;
vector <int> *adj;
int tg[100001]={0};
int rot[10001]={0};
bool *visited;
int rotation (int tg1,int tg2,int tr1)
 {
	 if(tg1==1 && tg2==1 )
	   {
		   if(tr1==1)
		    return -1;
		   else 
		     return 1;
	   }
	else if(tg1==1 && tg2==-1 || tg1==-1 && tg2==1)
	    {
			if(tr1==1)
			 return 1;
			 else 
			   return -1;
			 
		}
 }
 void bfs(int s,int f, int d1, int d2)
   {
     queue <int> q;
	 q.push(s);rot[s]=d1;
	 visited[s]=true;
	 
	 while(!q.empty())
	 {
       s=q.front();q.pop();
	     for(int i : adj[s])
		   {
             if(!visited[i])
			  {
				  visited[i]=true;
				  q.push(i);
				  rot[i]=rotation(tg[s],tg[i],rot[s]);

			  }

		   }
	 }
if(rot[f]!=d2)
 cout<<"NO"<<endl;
 else 
  cout<<"YES"<<endl;




   }

 int main()
 {
	 int n,m,q,u,v;int i,j;
	 cin>>n>>m>>q;
	  adj=new vector <int> [n+1];
	  visited=new bool [n+1];visited[0]=false;
	   for(i=1;i<=n;i++)
	    {  cin>>tg[i];
           visited[i]=false;
		}
      for(i=0;i<m;i++)
	  {
		  cin>>u>>v;
         adj[u].push_back(v);
		 adj[v].push_back(u);
	  }
     int g1,g2,d1,d2;
	  for(i=0;i<q;i++)
	  {
		  cin>>g1>>g2>>d1>>d2;
		  bfs(g1,g2,d1,d2);
		  for(j=0;j<=n;j++)
		  {
			  visited[j]=false;
			  rot[j]=0;
		  }
		    
	  }


	 return 0;
 }
