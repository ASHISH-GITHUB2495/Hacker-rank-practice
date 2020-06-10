#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define mod 100000


/*Implementing the stack to finding min element in  O(1)
 without changing the fundamental operation of stack*/
int main()
{/*
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif */
	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............
	deque <int> q; // taking stack as pair
//for pop use s.pop().first;
//for top use s.top().first;
//for min use s.top().second;

	int n;
	cin >> n; //number of element to insert;
	while (n--)
	{	int new_elem;
		cin >> new_elem;
		while (!q.empty() && q.back() > new_elem)
			q.pop_back();
		q.push_back(new_elem);

	}

	cout << "the min element is : " << q.front() << " in O(1)" << endl;







/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
