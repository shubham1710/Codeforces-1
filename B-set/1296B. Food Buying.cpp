/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 110
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int m, t;
    ll sum, q, r, n;

    sf(t);
    while(t--)
    {
        sfl(n);

        sum = 0;

        while(n)
        {
            q = n / 10;

            sum += q * 10;
            n -= (q * 10);
            n += q;

            // cout << (q * 10) << " " << q << " " << n;nl;

            if(n < 10) {
                sum += n;
                break;
            }
        }

        pfl(sum); nl;
    }

    return 0;
}
