#include <bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second

using namespace std;
typedef long long ll;
const int maxN = 100005;



int main() {
	int a[maxN], b[maxN];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a, a + n, greater<int>());
	sort(b, b + m, greater<int>());
	int i = 0, j = 0, res = 0;
	while(i < n && j < m)
	{
		if (a[i] > b[j])
		{
			res++;
			i++;
			j++;
		}
		else j++;
	}
	cout << res;
}