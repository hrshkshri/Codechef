#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define l long
#define ld long double
#define vi vector<int>
#define vc vector<char>
#define vll vector<long long>
#define pb push_back
#define sp <<" "<<

void yes() { cout<<"YES\n";}
void no() { cout<<"NO\n";}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll hlf=m/2;
        vll v;
        ll diff=0;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            v.pb(x);
            if(x<=hlf){
                diff=diff+abs(x-m);
            }
            if(x>hlf){
                diff=diff+abs(x-1);
            }
        }
        
        cout<<diff<<endl;
        
        
    }
    return 0;
}
