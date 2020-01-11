#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<long long int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s, e;
	s=e=0;
	bool flag=false;
	for(int i=0;i<n-1;i++){
		if(a[i+1]<a[i]){
			s=e=i;
			for(int j=i+1;j<n;j++){
				if(a[j]>a[j-1]){
					break;
				}
				e=j;
			}
			break;
		}
	}
	int b, c;
	b=s, c=e;
	while(s<=e){
		long long int temp=a[s];
		a[s]=a[e];
		a[e]=temp;
		++s;
		--e;
	}
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			flag=!flag;
			break;
		}
		//cout<<a[i]<<" ";
	}
	//cout<<endl;
	if(!flag)
		cout<<"yes\n"<<b+1<<" "<<c+1<<endl;
	else cout<<"no\n";
	return 0;
}