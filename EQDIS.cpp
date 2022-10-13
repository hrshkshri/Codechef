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
        int n, c = 0;
        cin >> n;
        vll v;
        vll a;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        
        sort(v.begin(), v.end());
        for (int j = 1; j < n; j++)
            {
                if (v[j] == v[j - 1])
                {
                    c++;
                }
            }
        if (n % 2 != 0 && c==0)
            {
                no();
            }
        else
            {
                yes();
            }
        
    }
    return 0;
}