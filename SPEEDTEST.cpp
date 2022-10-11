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
            float a,x,b,y;
    		cin>>a>>x>>b>>y;
    		float p=float(y/b);
    		float q=float(x/a);
    		if(p<q) {
    		    cout<<"Bob"<<endl;
    		}
    		else if(p>q) {
    		    cout<<"Alice"<<endl;
    		}
    		else {
    		    cout<<"Equal"<<endl;
    		}
        
    }
    return 0;
}
