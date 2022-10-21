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
        int a,b,c,x,y,z;
	    
	    cin>>a>>b>>c;
	    x=a%2;
	    y=b%2;
	    z=c%2;
	    if(x==y&&x==z&&y==z)
	    {
	       // cout<<"NO\n";
	       no();
	    }
	    else yes();
        
    }
    return 0;
}