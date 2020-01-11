#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

ll gcd(ll a, ll b){
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main(){
	ll x;
	cin>>x;
	vector<ll> factors;
	ll y=sqrt(x);
	++y;
	lloop(i, 2, y+1){
		if(x%i==0){
			factors.push_back(i);
			factors.push_back(x/i);
		}
	}
	ll sqr=y;
	y=x;
	sort(factors.begin(), factors.end());
	lloop(i, 0, factors.size()){
		/*if(x%i)
			continue;*/
		if(factors[i]>=sqr)
			break;
		ll temp=x/factors[i];
		ll p=gcd(temp, factors[i]);
		ll lcm=(temp*factors[i])/p;
		//cout<<i<<" "<<p<<" "<<lcm<<endl;
		if(lcm==x){
			y=factors[i];
		}
	}
	if(y==0){
		cout<<1<<" "<<x<<endl;
		return 0;
	}
	if(y>(x/y))
		cout<<x/y<<" "<<y<<endl;
	else cout<<y<<" "<<x/y<<endl;
	return 0;
}