#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int n;
	cin>>n;
	vector<int> a(n), b(n), c(1001);vector<vector<int> > d(1001);
	loop(i, 0, n){
		cin>>a[i]>>b[i];
		++c[b[i]];}
		//if(a[i]!=b[i]){
			/*d[b[i]].push_back(a[i]);
		//}
		//else if(a[i]==b[i]&&c[a[i]]>1)
		//	d[b[i]]=b[i];
	}
	cout<<" "<<c[53]<<endl;
	loop(i, 0, 1001){
		if(d[i].size()==0)
			continue;
		loop(j, 0, d[i].size()){
			if(i==d[i][j]&&c[d[i][j]]>=2)
				c[i]=0;
			else if(i!=d[i][j])
				c[i]=0;
		}
	}
	cout<<" "<<c[53]<<endl;*/
	ll ans=0;
	loop(i, 0, n)
		if(c[a[i]]==0||(c[a[i]]==1&&(a[i]==b[i])))
			++ans;
	cout<<ans<<endl;
	return 0;
}