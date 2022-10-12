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
        vi v1(n);
        vi v2(n);
        vi v3(n);
        for(int i=0; i<n; i++){
            cin>>v1[i];
        }
        for(int i=0; i<n; i++){
            v2[i]=(v1[n-1-i]-v1[i]);
            v3[i]=v2[i];
        }
        sort(v2.begin(), v2.end());
        reverse(v2.begin(), v2.end());
        if(v3==v2){
            cout<<v1[n-1]-v1[0]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
        
    }
    return 0;
}