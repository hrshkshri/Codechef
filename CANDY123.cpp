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
         int n,m;
	    cin>>n>>m;
	    int i=1;
	    while(true)
	    {
	        if((n-i)<0) 
	        {
	            cout<<"Bob"<<endl;
	            break;
	        }
	        n=n-i;
	        i++;
	        if((m-i)<0) 
	        {
	            cout<<"Limak"<<endl;
	            break;
	        }
	        m=m-i;
	        i++;
	    }
                
        
    }
    return 0;
}