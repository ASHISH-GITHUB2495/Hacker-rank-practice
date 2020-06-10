#include<bits/stdc++.h>
using namespace std;
//#define  long long int long long int
#define pb push_back
//#define f(n) for(  long long int long i=0;i<n;i++)
#define mod 100000

long long int dx[2] = {1, 0};
long long int dy[2] = {0, 1};

int main()
{
/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/                                     
	time_t start, end;
	time(&start);
	ios_base:: sync_with_stdio(false);
	cin.tie(0);/////////////////////start...............
	long long int  n, i, j; long  double data;
	cin >> n;
	long long int grid[n][n];
	for (i = 0; i < n; i++)
	{	for (j = 0; j < n; j++)
		{	cin >> data;
			grid[i][j] = floor(data);
		}
	}


	long long int vis[n][n] = {0};
	long long int sum;
	queue <pair< long long int,  long long int>> q;
	q.push({0, 0});
	vis[0][0] = 1; long long int flag = 1;
	sum = grid[0][0];
	while (!q.empty())
	{	auto f = q.front(); q.pop();
		long long int xi = f.first;   long long int   rxi = xi + dx[0];   long long int dxi = xi + dx[1];
		long long int yi = f.second;   long long int  ryi = yi + dy[0];   long long int dyi = yi + dy[1];
		if (xi == n - 1 && yi == n - 1)
		{	cout << sum ;
			break;

		}
		if ((rxi >= 0 && ryi < n) && (dxi >= 0 && dyi < n))
		{	if (grid[rxi][ryi] <= grid[dxi][dyi] && vis[rxi][ryi] != 1)
			{
				vis[rxi][ryi] = 1;
				q.push({rxi, ryi});
				sum = floor(sum / 2) + grid[rxi][ryi];

			}
			else if ( vis[dxi][dyi] != 1)
			{	vis[dxi][dyi] = 1;
				q.push({dxi, dyi});
				sum = floor(sum / 2) + grid[dxi][dyi];

			}
		}
		else if ((rxi >= 0 && ryi < n) && (dyi >= n) && vis[rxi][ryi] != 1)
		{	vis[rxi][ryi] = 1;
			q.push({rxi, ryi});
			sum = floor(sum / 2) + grid[rxi][ryi];

		}
		else if ((dxi >= 0 && dyi < n) && (rxi >= n) && vis[dxi][dyi] != 1)
		{	vis[dxi][dyi] = 1;
			q.push({dxi, dyi});
			sum = floor(sum / 2) + grid[dxi][dyi];

		}
	
	}
	//cout << sum;



/////////////////////////////end.......................................
/*	time(&end);
	double time_taken =  double(end - start);
	cout << endl << "Time taken by program is : " << fixed
	     << time_taken << setprecision(10);
	cout << " sec " << endl; */
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
