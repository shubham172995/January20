#include<bits/stdc++.h>
int main(){
	int t;
	std::cin>>t;
	for(int f=1;f<=t;f++){
		std::string s;
		std::cin>>s;
		int l=s.length();
		std::string a, b;a=b="";
		for(int i=0;i<l;i++){
			if(s[i]=='4'){
				a+="2";
				b+="2";
			}
			else{
				a+=s[i];
				b+="0";
			}
		}
		int i;
		for(i=0;i<l;i++)
			if(b[i]!='0')
				break;
		if(i!=0)
			b=b.substr(i, l-i);
		std::cout<<"Case #"<<f<<": "<<a<<" "<<b<<std::endl;
	}
	return 0;
}