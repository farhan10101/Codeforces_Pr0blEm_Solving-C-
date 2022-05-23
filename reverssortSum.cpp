#include <iostream>
#include <bits/stdc++.h>

using namespace std;
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

void asquare()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll m=0;
    vector<ll>v,w,ans;
    bool ok=true;
    ll a=0,b=0;
    fl(i,n)
    {
        if(s[i]=='1'){b++;v.pb(i);}
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='0'){a++;w.pb(i);}
    }
    fl(i,v.size())
    {
        if(v[i]<n-b){
            m++;
            ans.pb(v[i]);
        }
    }
    fl(i,w.size())
    {
        if(w[i]>a-1)
        {
            m++;
            ans.pb(w[i]);
        }
    }

    if(ans.size()==0)
    cout<<"0\n";
    else
    {
        sort(vr(ans));
        cout<<"1\n";
        cout<<ans.size()<<" ";
        fl(i,ans.size())
        cout<<ans[i]+1<<" ";
        cout<<"\n";
    }
}
int main()
{
    Code By Asquare
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }

    return 0;
}
