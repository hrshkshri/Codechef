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
        int p,q,a,b;
        cin>>p>>q>>a>>b;
        int x=(a+b)%2, y=(p+q)%2;
        
        if((p==a)&&(q==b)){
            cout<<0<<endl;
        }
        else if(x!=y){
            cout<<1<<endl;
            
        }
        else{
            cout<<2<<endl;
        }
        
    }
    return 0;
}