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
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        if(double(a/x)>double(b/y)) cout<<"Chefina"<<endl;
        else if(double(a/x)<double(b/y)) cout<<"Chef"<<endl;
        else cout<<"Both"<<endl;
        
    }
    return 0;
}