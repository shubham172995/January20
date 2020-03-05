#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	scanf("%d", &t);
	for(int j=1;j<=t;j++){
		cout<<"Case #"<<j<<": ";
		int n;
		cin>>n;
		string s;
		cin>>s;
		string ans="";
		for(int i=0;i<s.length();i++)
		    ans+=s[i]=='S'?'E':'S';
		//int lydia=0, me=0, south=0, east=0, i=0;
		//findpath(n, lydia, me, s, ans, south, east, i);
		cout<<ans<<endl;
	}
	return 0;
}