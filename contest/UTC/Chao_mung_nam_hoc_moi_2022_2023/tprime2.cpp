#include <bits/stdc++.h>


#define fl(i, n) for(int i = 0; i < n; i++)

#define ll   long long
#define nl   endl
#define pb   push_back
#define mp   make_pair
#define PII  pair<int,int>

#define EPS  1e-9
#define INF  1e9


using namespace std;

set<long long> a;
ll b[1000000+1];
bool primes[1000000+1];
int k = 0;

void order(){
memset(primes,true,sizeof(primes));
primes[0] = primes[1] = 0;
for(ll i = 2 ; i <= sqrt(1e12)+1; i++){
    if(primes[i]){
        for(int j = i*2; j <= sqrt(1e12)+1; j+=i){
            primes[j] = 0;
        }
    }
}
for(ll i = 2; i <= sqrt(1e12)+1; i++){
    if(primes[i]){
        a.insert(i*i);
    }
}
}


int main()
{
    int n;
    cin >> n;
    order();


    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(a.find(b[i]) != a.end()){
            cout << "YES" << nl;
        }
        else cout << "NO" << nl;
    }


    return 0;
}