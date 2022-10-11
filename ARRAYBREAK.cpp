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
        int n;
	    cin>>n;
	    vll v;
	    ll cnt=0;
	    
	    for(int i=0; i<n; i++){
	        int x;
	        cin>>x;
	        v.pb(x);
	        if(x%2==0){
	            cnt++;
	        }
	   }
	   if(cnt==n) cout<<0<<endl;
	   else cout<<cnt<<endl;
	   //cout<<cnt==n ? 0: cnt<<endl; 

        
                
        
    }
    return 0;
}