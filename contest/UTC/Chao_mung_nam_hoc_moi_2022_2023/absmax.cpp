    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int n; cin >> n;
        long long a[200001];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        cout << max(abs(a[0]+a[1]), abs(a[n-1]+a[n-2])); 
    }