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
        int n;
        cin>>n;
        double y=0.5;
        double x=(pow(double(double(0.143)*double(n)),double(n)));
        double z=floor(x);
        if(x>z+y) cout<<ceil(x)<<endl;
        else cout<<z<<endl;
        
    }
    return 0;
}
