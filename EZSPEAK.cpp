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
        int size;
	    cin >> size;
	    string data;
	    cin >> data;
	    bool flag = true;
	    for (int i = 0; i < size; i++)
	    {
	        int idx = i;
	        while(data[i] != 'a' && data[i] != 'e' && data[i] != 'i' && data[i] != 'o' && data[i] != 'u' && i < size)
	        {
	            i++ ;
	        }
	        if (i - idx >= 4)
	        {
	            cout << "NO \n";
	            flag = false;
	            break;
	        }
	    }
	    if (flag)
	    {
	        cout << "YES \n";
	    }
        
    }
    return 0;
}