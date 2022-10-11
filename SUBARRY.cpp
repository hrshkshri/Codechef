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
         ll n;
        cin >> n;
        vll v;
        ll max = INT_MIN;
        ll min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        
         if(min<0 && max<=0){
            cout<<max*max sp min*min<<endl;
        }
        else if(min>=0 && max>=0){
            cout<< min*min sp max*max<<endl;
        }
        else
        {
            cout<<min*max<<" ";
            if((abs(min))>max){
                cout<<min*min<<endl;
            }
            else
            {
                cout<<max*max<<endl;
            }
            
        }
        
    }
    return 0;
}