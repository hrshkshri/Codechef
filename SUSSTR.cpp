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
        string str;
	    cin>>n>>str;
	    int left=0,right=n-1;
	    deque<char> v;
	    while(1) {
            if(str[left]=='0') v.push_front('0');
            else v.push_back('1');
            left++;
            if(left>right) break;
            if(str[right]=='1') v.push_front('1');
            else v.push_back('0');
            right--;
            if(left>right) break;
        }
	    for(int i=0; i<v.size(); i++){
	         cout<<v[i];
	     }
	     cout<<endl;
	   
	}
	return 0;
}