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
	    
	    if(n%2==0){
	        cout<<"0";
	        for(int i=1;i<=n-2;i++)
	        cout<<"1";
	        cout<<"0";
	    }else{
	        cout<<"1";
	        for(int i=1;i<=n-2;i++)
	        cout<<"0";
	        cout<<"1";
	    }
	    
	    cout<<endl;
        
    }
    return 0;
}