#include "bits/stdc++.h"
using namespace std;

template <class T1> void deb(T1 e){cout << e << endl;}
template <class T1,class T2> void deb(T1 e1,T2 e2){cout << e1 << " "<< e2 << endl;}
template <class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout << e1 << " " << e2 << " " << e3 << endl;}

#define oo          (1<<30)
#define SZ(a)       (int)a.size()
#define LL          long long int
#define ULL         unsigned long long
#define ISS         istringstream
#define OSS         ostringstream
#define VS          vector <string>
#define VI          vector <int>
#define VD          vector <double>
#define VLL         vector <long long>
#define SII         set<int>::iterator
#define SI          set<int>
#define mem(a,b)    memset(a,b,sizeof(a))
#define fs          first
#define sc          second
#define pii         pair < int , int >

#define EQ(a,b)     (fabs(a-b)<ERR)
#define all(a,b,c)  for(int I=0;I<b;I++)    a[I] = c
#define CROSS(a,b,c,d) ((b.x-a.x)*(d.y-c.y)-(d.x-c.x)*(b.y-a.y))
#define sqr(a)      ((a)*(a))
#define FORE(i,a)   for(typeof((a).begin())i=(a).begin();i!=(a).end();i++)
#define BE(a)       a.begin(),a.end()
#define RBE(a)      a.rbegin(),a.rend()
#define rev(a)      reverse(BE(a));
#define sorta(a)    sort(BE(a))
#define pb          push_back
#define popb        pop_back
#define Round(i,a)  i = ( a < 0 ) ? a - 0.5 : a + 0.5;

#define makeint(n,s)  istringstream(s)>>n
#define string_to_int(str) atoll(str.c_str());

#define LCM(A,B)    ((__gcd(A,B))/A)*B
#define GCD(A,B)     __gcd(A,B)

#define YES     deb("YES")
#define Yes     deb("Yes")
#define yes     deb("yes")
#define NO      deb("NO")
#define No      deb("No")
#define no      deb("no")

#define read()      freopen("test.txt","r",stdin)
#define write()     freopen("WA.txt", "w", stdout);
#define Faster      {ios_base::sync_with_stdio(false); cin.tie(0);}

#define PI          3.141592653589793
#define pi          2*acos(0)
#define gama        0.57721566490
#define ERR         1e-5
#define PRE         1e-8
#define MAX         1000009

#define Scan(A)         scanf("%lld", &A)
#define Scan2(A, B) 	scanf("%lld %lld",&A, &B)
#define Scan3(A, B, C) 	scanf("%lld %lld %lld",&A, &B, &C)
#define Scan4(A, B, C, D) 	scanf("%lld %lld %lld %lld",&A, &B, &C, &D)

int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

bool isvowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
}

#define SIZE 1002
LL N, dp[SIZE][32], wt[SIZE], num[SIZE];

LL Knap(LL i, LL w)
{
    if(i == N)
        return 0;
    LL &ret = dp[i][w];

    if(ret != -1)
        return ret;
    ret = Knap(i+1, w);
    if(w >= wt[i])
        ret = max(ret, num[i] + Knap(i+1, w-wt[i]));
    return ret;
}

main()
{
    LL T;
    Scan(T);
    while(T-- > 0)
    {
        Scan(N);
        for(int i = 0; i < N; i++)
            Scan2(num[i], wt[i]);

        mem(dp, -1);
        LL Q, Sum = 0, temp;

        Scan(Q);
        while(Q-- > 0)
            Scan(temp), Sum += Knap(0, temp);

        printf("%lld\n", Sum);
    }
    return 0;
}
