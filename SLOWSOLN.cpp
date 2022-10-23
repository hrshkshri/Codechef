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
        int maxN,maxT,sumN;
        cin>>maxT>>maxN>>sumN;
	    
	    int t=sumN/maxN;
	    int sum=0,sum2=0,sum3=0;
	    
	   
	   

	       if(t>maxT)
	       {
	           t=maxT;
	       }
	    
	  
	   
	   for(int i=0; i<t; i++)
	   {
	       sum+=maxN*maxN;
	   }
	  

	   //cout<<t<<endl;
	   //cout<<sum<<endl;
	   
	   if(t<maxT){
	       cout<<sum+((sumN-(maxN*t))*(sumN-(maxN*t)))<<endl;
	       
	   }
	   else
	   {
	       cout<<sum<<endl;
	       
	   }
        
    }
    return 0;
}