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

        int R;
	cin >> R;

	if(R<51){
	  cout <<"100"<<endl;
	}
	else if(R>50 && R<101){
		cout <<"50"<<endl;
	}

	else{
		cout <<"0"<<endl;
	}
                
        
    
    return 0;
}