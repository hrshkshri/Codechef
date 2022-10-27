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
        int n,q; int sum=0;
        cin>>n>>q;
        int arr[n]; int li,ri; vector<vector<int>> vec; vector<int> v;
        for(int i=0; i<n; i++)
            {     cin>>arr[i];
                    sum += arr[i];
            }
        for(int i=0; i<q; i++)
        {   cin>>li;
            v.push_back(li);
            cin>>ri;
            v.push_back(ri);
            vec.push_back(v);
            v.clear(); }
        for(int i=0; i<q; i++)
        {
            if( (vec[i][1] - vec[i][0] + 1) % 2 !=0 )
                    sum += 1;
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}