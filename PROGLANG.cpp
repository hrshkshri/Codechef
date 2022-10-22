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
         int a,b,x,y,m,n;
	    cin>>a>>b>>x>>y>>m>>n;
	    
	    if((a==x && b==y)||(a==y && b==x)){
	        cout<<1<<endl;
	    }
	    else if((a==m && b==n)||(a==n && b==m)){
	        cout<<2<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
        
    }
    return 0;
}