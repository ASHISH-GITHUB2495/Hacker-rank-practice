// Write your code here
#include<bits/stdc++.h>
using namespace std;
 
int main()
{

	time_t start, end;
	time(&start);
	ios_base::sync_with_stdio(false);/////////////////////start...............
	long long r, c, ci, cj, i, j;
	cin >> r >> c >> ci >> cj;
	long long arr[r][c];
	long long vis[r][c];
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
		{
			arr[i][j] = 0;
			vis[i][j] = 0;
		}
 
 
 
	long long xi[] = { -1, -1, -1, 0, 1, 1, 1, 0};
	long long yi[] = {0, -1, 1, 1, 1, 0, -1, -1};
	queue <pair<long long, long long> > q;
	q.push({ci, cj});
	vis[ci][cj] = 1;
	arr[ci][cj] = 0;
	while (!q.empty())
	{	auto f = q.front();
		long long x = f.first;
		long long y = f.second;       q.pop();
 
		for (i = 0; i < 8; i++)
		{	long long dx = x + xi[i];
			long long dy = y + yi[i];
			if ((dx >= 0 && dx < r) && (dy >= 0 && dy < c))
			{
				if (vis[dx][dy] != 1)
				{	vis[dx][dy] = 1;
					q.push({dx, dy});
					arr[dx][dy] = arr[x][y] + 1;
 
				}
 
			}
 
 
		}
 
 
	}
 
	for (i = 0; i < r; i++)
	{	for (j = 0; j < c; j++)
		{	cout << arr[i][j] << " ";
 
		}
		cout << endl;
	}
 
 
 
	/////////////////////////////end.......................................
	// time(&end);
	// double time_taken =  double(end - start);
	// cout << endl << "Time taken by program is : " << fixed
	//      << time_taken << setprecision(10);
	// cout << " sec " << endl;
	// return 0;
 
}
 
//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
