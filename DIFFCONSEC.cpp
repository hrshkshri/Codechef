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
        int n,c=0;
		cin>>n;
		string s;
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]==s[i+1])
			{
				c++;
			}
		}
		cout<<c<<"\n";
        
    }
    return 0;
}