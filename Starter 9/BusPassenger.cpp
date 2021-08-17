#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int power(ll x,ll y,ll p) 
{ 
    ll r=1; 
    while (y > 0) 
    { 
        if(y & 1) r=(r*x)%p; 
        y=y>>1;  
        x=(x*x)%p;  
    } 
    return r; 
}
string bin(int n) 
{ 
    string s="";
    for(int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            s+="1"; 
        else
            s+="0"; 
    } 
    return s;
} 
int lcm(int x,int y)
{
    return (x*y)/__gcd(x,y);
}
ll ncr(ll n ,ll r, ll p) 
{ 
    ll res=1;
    ll nu=1;
    if (r == 0) 
        return 1; 
    for(ll i=1;i<=r;i++)
    {
        nu=(nu*(n-r+i))%p;
        res=(res*i)%p;
    }
    return (nu*power(res,p-2,p))%p; 
} 
int bint(string s)
{
    reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans+=pow(2,i)*(s.at(i)-48);
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int ans,n,mi,q,v;
        ans=0;
        bool con=true;
        cin >> n >> mi >> q;
        unordered_map<int,int> m;
        for(int i=0;i<q;i++){
            string s,s1;
            cin>>s;
            cin>>v;
            if(s=="+"){
                if(m[v]==0){
                    m[v]=1;
                    ans++;
                }
                else{
                    m[v]+=1;
                    if(m[v]>1){
                        con=false;
                    }
                }
            }else{
                if(m[v]==0){
                    con=false;
                }
                else{
                    m[v]-=1;
                    ans--;
                }
            }
            if(ans>mi){
                con=false;
            }
        }
        if(con){
            cout<<"Consistent\n";
        }else{
            cout<<"Inconsistent\n";
        }
    }
	return 0;
}