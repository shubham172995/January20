#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	cin>>n;
	string s;
	cin.ignore();
	cin>>s;
	int min=0, max=0;
	for(int i=0;i<n;i++)
		if(s[i]=='L')
			--min;
		else
			++max;
	int ans=max-min;
	++ans;
	cout<<ans<<endl;
	return 0;
}