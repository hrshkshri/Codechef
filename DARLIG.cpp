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
     int n,k;
     cin>>n>>k;
     if(k==0)
     {
	    if(n%4==0)
	    cout<<"off"<<endl;
	    else
	    cout<<"on"<<endl;
     }
    else if(k==1 )
    {
	    if(n%4==0)
	    cout<<"on"<<endl;
	    else
	    cout<<"Ambiguous"<<endl;
  	}
        
    }
    return 0;
}