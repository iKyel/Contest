    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t; cin >> t;
        long long a[100001];
        for(int i=1; i<=t; i++)
        {
            cin >> a[i];
        }
        for(int i=1; i<=t; i++)
        {
            if(a[i]%2==0) cout << "Test Case #" << i << ": Atreus" << endl;
            else cout << "Test Case #" << i << ": Kratos" << endl;
        }
    }