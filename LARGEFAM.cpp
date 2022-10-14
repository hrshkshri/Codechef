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
        int n;
        cin>>n;
	    int a[n],sum=0,c=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0; i<n; i++)
	    {
	        sum+=a[i];
	        if(sum>=n){
	            break;
	        }
	        c++;
	    }
	    cout<<c<<endl;
        
    }
    return 0;
}