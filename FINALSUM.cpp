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
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
	    cin>>n>>q;
	    vector<int> arr(n);
	    int sum=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    while(q--){
	        int x,y;
	        cin>>x>>y;
	        int d=y-x+1;
	        if(d%2)sum++;
	    }
	    cout<<sum<<endl;
        
    }
    return 0;
}