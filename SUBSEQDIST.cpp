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
        vi v(n),w;
        map<int, int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto i: mp){
            w.emplace_back(i.second);
        }
        int wmx=*max_element(w.begin(), w.end());
        cout<<ceil(log2(wmx))<<endl;
    }
    return 0;
}