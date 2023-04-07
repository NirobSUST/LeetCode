// // Kadane's Algorithm
// /*
// Author :: Shahadat Hossain Nirob
// Department of Mathematics
// Shahjalal University of Science and Technology,Sylhet
// Email: nirobsyclonite@gmail.com
// */
// #include <algorithm>
// #include <cassert>
// #include <climits>
// #include <cmath>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <deque>
// #include <fstream>
// #include <iomanip>
// #include <iostream>
// #include <iterator>
// #include <list>
// #include <map>
// #include <numeric>
// #include <queue>
// #include <stack>
// #include <set>
// #include <string>
// #include <vector>

// using namespace std;

// namespace IO
// {
//     #define II() ( { int a ; read(a) ; a; } )
//     #define LL() ( { Long a ; read(a) ; a; } )
//     #define DD() ({double a; scanf("%lf", &a); a;})
//     #define FI freopen ("input.txt", "r", stdin)
//     #define FO freopen ("output.txt", "w", stdout)
//     template<class T>inline bool read(T &x){
//         int c=getchar();int sgn=1;
//         while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}
//         for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; 
//         x*=sgn; return ~c;
//     }
// }
// namespace Utility
// {
//     template< typename T > T gcd(T a, T b) { return a ? gcd(b%a,a) : b; }
//     template< typename T > T lcm(T a, T b) { return (a / gcd(a, b) * b); }
//     template< typename T >inline T addmod(T a, T b, T mod) { T c = a+b; return c>mod? c-mod : c; }
//     template< typename T >inline T submod(T a, T b, T mod) { T c = a-b; return c<mod? c+mod : c; }
//     template< typename T >inline T mulmod(T a, T b, T mod) { return a*1LL*b%mod; }
//     template< typename T> T exEuclid(T a, T b, T &x, T &y) {
//         x = 0, y = 1;
//         if (a == 0) return b;
//         T x1, y1;
//         T d = exEuclid(b%a, a, x1, y1);
//         x = y1 - (b / a) * x1;
//         y = x1;
//         return d;
//     }
//     template< typename T > T modInv(T a, T mod){
//         T x, y; exEuclid(a,mod,x,y);
//         return x < 0? x + mod : x;
//     }
//     template<typename T> T bigmod(T b, T p, T mod){
//         T ret = b>0;
//         while(p){
//             if (p&1) ret = mulmod(ret, b, mod);
//             p >>= 1 , b = mulmod(b, b, mod);
//         }
//         return ret;
//     }
// }
// using namespace IO;
// using namespace Utility;

// #define FF first
// #define SS second
// #define PB push_back
// #define MP make_pair
// #define all(cont) cont.begin(), cont.end()
// #define rall(cont) cont.end(), cont.begin()
// #define DB if(0) 
// #define D(x) cout << #x " is " << x << endl

// typedef long long Long;
// typedef vector<int> VI;
// typedef vector<VI> VVI;
// typedef pair<int, int> PII;
// typedef vector<PII> VII;
// typedef vector<string> VS;

// const int INF = 2000000009;
// const int MX = 1000005;
// const double EPS = 1e-9;
// const double PI = acos(-1.0);
// const int MOD = 1000000007;

// #define nl puts ("")
// #define sp printf ( " " )
// #define phl printf ( "hello\n" )
// #define POPCOUNT __builtin_popcountll
// #define RIGHTMOST __builtin_ctzll
// #define LEFTMOST(x) (63-__builtin_clzll((x)))
// #define MP make_pair
// #define FOR(i,x,y) for(vlong i = (x) ; i <= (y) ; ++i)
// #define ROF(i,x,y) for(vlong i = (y) ; i >= (x) ; --i)
// #define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
// #define MIN(a,b) ((a)<(b)?(a):(b))
// #define MAX(a,b) ((a)>(b)?(a):(b))
// #define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)
// #define SQ(x) ((x)*(x))
// #define ABS(x) ((x)<0?-(x):(x))
// #define FABS(x) ((x)+eps<0?-(x):(x))
// #define ALL(x) (x).begin(),(x).end()
// #define LCM(x,y) (((x)/gcd((x),(y)))*(y))
// #define SZ(x) ((vlong)(x).size())
// #define NORM(x) if(x>=mod)x-=mod;
// #define MOD(x,y) (((x)*(y))%mod)
// #define ODD(x) (((x)&1)==0?(0):(1))

// typedef string st;
// typedef vector<st> vs;
// #define rep(i, n) for(int i = 0; i < n; i++)
// #define fogg(i,a,b) for(int i = (a); i <= (b); i++)
// #define ford(i,a,b) for(int i = (a); i >= (b); i--)
// #define test int t; cin >> t; while(t--)
// #define endl '\n'
// #define off ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// int main() {
// 	//off;
// 	#ifndef ONLINE_JUDGE
//     FI;
// 	FO;
//     #endif
//     int n = II();

//     int nums[100005];
//     int current = nums[0];
//     int total = nums[0];

//     rep(i,n) nums[i] = II();

//     for( int i = 1; i < n; i++)
//     {
//     	current = max(nums[i], current + nums[i]);
//     	total = max (total, current);
//     }

//     cout << total << endl;
// 	return 0;
// }


// Using Kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0];
        int total = nums[0];

        for( int i = 1; i < nums.size(); i++)
        {
    	    current = max(nums[i], current + nums[i]);
    	    total = max (total, current);
        }
        return total;

    }
};