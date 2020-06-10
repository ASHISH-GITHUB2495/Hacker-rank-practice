#include<bits/stdc++.h>
using namespace std;
int ground[1001][1001];
int visit[1001][1001];
vector <int> high;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair <int,int>> q;int count1;int count2;






void bfs(int n,int m)
{ 
  count2=0;count1=0;
  q.push(make_pair(0,0));
  visit[0][0]=1;int flag=0;
   while(!q.empty())
   {  int	x=q.front().first;flag=0;
       int y=q.front().second;
       for(int i=0;i<4;i++)
	     { int x1=x+dx[i];int y1=y+dy[i];
			  if((x1>0 && x1<n ) && (y1>0 && y1<m))
	        {
		    
			 
			 if(ground[x1][y1]==0 && visit[x1][y1]!=1 )
			   {
				   visit[x1][y1]=1;
				   q.push(make_pair(x1,y1));
			   }
			 else if(ground[x1][y1]==1 && visit[x1][y1]!=1 && ground[x][y]==1)
			    {
                    flag=1;visit[x1][y1]=1;
				   count1++;q.push(make_pair(x1,y1));
				}
             else if(ground[x1][y1]==1 && visit[x1][y1]!=1 && ground[x][y]==0)
			    {
				 visit[x1][y1]=1;
				 q.push(make_pair(x1,y1));
			    }

	         }
	   } 


             if(flag==0 && ground[x][y]==1)
			 {  high.push_back(count1+1);
			     count1=0;
				 count2++;

			 }




   }


cout<<count2<<" "<<count1<<endl;
}










int main()
{
  int t;
  cin>>t;
  while(t)
  {
    int n,m,i,j;
	cin>>n>>m;
    for(i=0;i<n;i++)
	 for(j=0;j<m;j++)
	    cin>>ground[i][j];
		bfs(n,m);
        
		for(i=0;i<n;i++)
		 for(j=0;j<m;j++)
		   visit[i][j]=0;

		  while(!q.empty())
		    q.pop();


	  t--;
  }
	return 0;
}/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

