#include<bits/stdc++.h>
using namespace std;

string res="";

void findpath(int n, int lydia, int me, string s, string ans, int south, int east, int i){
	//cout<<lydia<<" "<<me<<" "<<ans<<" "<<south<<" "<<east<<" "<<i<<" "<<endl;
	if(south==n-1&&east==n-1){
		res=ans;
		return;
	}
	if(south>=n||east>=n)
		return;
	if(lydia==me){
		if(s[i]=='S'){
			ans+='E';
			me+=1;
			lydia+=n;
			++east;
			++i;
			if(east>=n){
				return;
			}
		}
		else{
			ans+='S';
			me+=n;
			lydia+=1;
			++south;
			++i;
			if(south>=n){
				return;
			}
		}
		findpath(n, lydia, me, s, ans, south, east, i);
	}
	else{
		lydia+=s[i+1]=='S'?n:1;
		if(res.length()==s.length()){
			return;
		}
		findpath(n, lydia, me+1, s, ans+'E', south, east+1, i+1);
		if(res.length()==s.length()){
			return;
		}
		findpath(n, lydia, me+n, s, ans+'S', south+1, east, i+1);
	}
}

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
		int lydia=0, me=0, south=0, east=0, i=0;
		findpath(n, lydia, me, s, ans, south, east, i);
		cout<<res<<endl;
	}
	return 0;
}