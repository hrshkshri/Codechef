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
        int n;
        cin>>n;
        vll a;
        vll b;
        vll v;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
            
        }
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            b.push_back(x);            
        }
        ll sum1 =accumulate(a.begin(), a.end(), 0);
        ll sum2 =accumulate(b.begin(), b.end(), 0);
            ll sum3=0;
         for(int i=0; i<n; i++){
            sum3+=abs(a[i]-b[i]);      
    
         }
      
         if(sum1==sum2){
            cout<<sum3/2<<endl;
         }
         else{          
              cout<<-1<<endl;
         }
        
    }
    return 0;
}