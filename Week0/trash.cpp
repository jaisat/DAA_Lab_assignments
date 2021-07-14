#include<bits/stdc++.h>
using namespace std;
void basics()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
// void solve()
//	//linear search O(n)
// {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 		cin >> arr[i];
// 	int key;
// 	cin >> key;
// 	int count = -1;
// 	for (int i = 0; i < n; i++)
// 	{
// 		if (arr[i] == key) {
// 			count = i + 1;
// 		}
// 	}
// 	if (count != -1)
// 		cout << "Present " << count << endl;
// 	else
// 		cout << "Not Present " << n << endl;
// }
// void solve()
// {
// 	//Binary Search O(logn)
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int key;
// 	cin >> key;
// 	int count = 0;
// 	int l = 0, r = n - 1, mid;
// 	string str = "Not Present ";
// 	while (l <= r)
// 	{
// 		count++;
// 		mid = floor(l + r) / 2;
// 		if (arr[mid] == key)
// 		{
// 			str = "Present ";
// 			break;
// 		}
// 		else if (arr[mid] > key)
// 		{
// 			count++;
// 			r = mid - 1;
// 		} else {
// 			count++;
// 			l = mid + 1;
// 		}
// 	}
// 	cout << str << count << endl;
// }
// void solve()
// {
// 	//Jump Search less than O(n)
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	int key;
// 	cin >> key;

// 	int jb = sqrt(n);
// 	int p2 = 0;
// 	int count = 0;
// 	string str = "Not Present ";
// 	bool flag = 0, ini = 0, in = 0;
// 	while (arr[min(jb, n) - 1] < key)
// 	{
// 		in = 1;
// 		count += 2;
// 		p2 = jb;
// 		jb += sqrt(n);
// 		if (p2 >= n)
// 		{
// 			ini = 1;
// 			flag = 1;
// 			break;
// 		}
// 	}

// 	if (!in and !ini) count++;
// 	if (in and !ini) count++;

// 	in = 0, ini = 0;
// 	while (arr[p2] < key and !flag)
// 	{
// 		in = 1;
// 		count += 2;
// 		p2++;
// 		if (p2 == min(n, jb))
// 		{
// 			ini = 1;
// 			flag = 1;
// 			break;
// 		}
// 	}
// 	if (!ini and !in) count++;
// 	if (in and !ini) count++;

// 	if (arr[p2] == key and !flag)
// 		str = "Present ";
// 	count++;
// 	cout << str << count << endl;
// }
int32_t main()
{
	basics();
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
