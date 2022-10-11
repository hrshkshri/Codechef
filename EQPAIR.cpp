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
               ll n;
        		cin>>n;
        		vll ans;
        		for(int i=0; i<n; i++){
        		    int x;
        		    cin>>x;
        		    ans.push_back(x);
        		}
        		sort(ans.begin(), ans.end());
        		int itr=0;
        		ll a[n]={0};
        		for(int i=0; i<n-1; i++){
        		    if(ans[i]==ans[i+1]){
        		        a[itr]+=1;
        		    }
        		    else{
        		        itr++;
        		    }
        		}
        		ll s=0;
        		for(int i=0; i<n; i++){
        		  s+=((a[i])*(a[i]+1))/2;
        		}
        		cout<<s<<endl; 
        
    }
    return 0;
}
