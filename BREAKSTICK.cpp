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
        int n,x;
	    cin>>n>>x;
	    if(x%2==0)
	    {
	        if((n-x)%2==0)
	         cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else{
	        
	         cout<<"YES"<<endl;
	      
	    }
        
    }
    return 0;
}