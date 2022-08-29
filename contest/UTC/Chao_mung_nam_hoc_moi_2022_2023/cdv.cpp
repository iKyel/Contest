        #include<bits/stdc++.h>

        using namespace std;

        int main()
        {
            long long n,a,b; cin >> n >> a >> b;
            for(long i=0; i<=n; i++)
            {
                long long res = (n-a*i)/b;
                if(res*b+a*i == n)
                {
                    cout << res+i;
                    return 0;
                }
            }
            cout << "-1";
        }