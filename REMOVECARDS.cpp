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
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);        
        int itm=arr[0],freq=0,max=0;
        for(int i = 0; i < n; i++) {
        
         if(arr[i] == itm) {
                    freq++;
            }
            else {
                if(freq > max) {
                    max = freq;
                }
                    itm = arr[i];
                    freq = 1;
                }
            }
            if(freq > max) {
                max = freq;
            }
            cout<<n-max<<endl;
        
        

        
        
    }
    return 0;
}