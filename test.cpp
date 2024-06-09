#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,newstr;
	cin>>str;
	for(char c: str){
		if(c=='a'){

		}else{
			newstr+=c;
		}
	}
	string s1, s2;
	s1 = newstr.substr(0,newstr.length()/2);
	s2 = newstr.substr(newstr.length()/2, newstr.length());
	cout<<newstr<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	if(s1==s2){
		cout<<str.substr(0,(str.length()-newstr.length()/2))<<endl;
	}else{
		cout<<":("<<endl;
	}
	
	return 0;
}