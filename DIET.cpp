#include <iostream>

using namespace std;


int main() {
	// your code goes here
	int t;
	long long int n,k,i,total;
	bool flag=0;
	cin>>t; while(t--){
	    cin>>n>>k;
	    int a[n];
	    total=0;
	    flag=0;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++){
	        total=total+a[i];
	        if(total>=k) total=total-k;

	        else if(total<k){
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1){
	        cout<<"NO "<<i+1<<endl;
	    }
	    else{
	        cout<<"YES\n";
	    }
	    
	}
	
	return 0;
}