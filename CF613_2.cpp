#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)



ll maxNum(vector<ll> a, ll size) 
{ 
   ll maxsofar = 0, maxendinghere = 0; 
   lloop(i, 0, size) 
   { 
       maxendinghere = maxendinghere + a[i]; 
       if (maxendinghere < 0) 
           maxendinghere = 0; 
       else if (maxsofar < maxendinghere) 
           maxsofar = maxendinghere; 
   } 
   return maxsofar; 
} 


int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a(n);
		ll y=0;
		lloop(i, 0, n){
			cin>>a[i];
			y+=a[i];
		}
		vector<ll> b(n-1), c(n-1);
		lloop(i,0, n-1){
			b[i]=a[i];
			c[i]=a[i+1];
		}
		ll temp=maxNum(b, n-1);
		ll max=maxNum(c, n-1);
		max=max>temp?max:temp;
		/*lloop(i, 1, n-1){
			if(a[i]>=0){
				temp+=a[i];
			}
			else{
				max=max>temp?max:temp;
				temp=a[i];
			}
		}
		max=max>temp?max:temp;
		temp=a[1];
		lloop(i, 2, n){
			if(a[i]>=0){
				if(temp<0)
					temp=0;
				temp+=a[i];
			}
			else{
				max=max>temp?max:temp;
				temp=a[i];
			}
		}
		cout<<temp<<endl;
		max=max>temp?max:temp;*/
		//cout<<max<<" "<<y<<endl;
		if(max>=y)
			cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}