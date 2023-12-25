# [Day 1 - Strings and Arrays](https://codeforces.com/group/yg7WhsFsAp/contest/355490)

## [P01. Reverse an array](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01)


```
#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x=0; cin>>x;
		v.push_back(x);
	}
	for(int i=(n-1); i>=0; i--){
		cout<<v.at(i)<<" ";
	}
	return 0;
}
```

## [P02. Candies ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	vector<int>v;
	int n=0;
	cin>>n;
	for(int i=0; i<n; i++){
		int x=0; cin>>x;
		v.push_back(x);
	}
	int x,y,sum=0;
	cin>>x>>y;
	for(int i=x; i<=y; i++){
		sum+=v[i];
	}
	cout<<sum<<endl;
	return 0;
}
```

## [P03. Way Too Long Words ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P03 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin>>n;
	while(n--){
    	string str;
    	cin>>str;
    	if(str.length()>10){
    		cout<<str[0]<<str.length()-2<<str[str.length()-1];
    	}
    	else{
    		cout<<str;
    	}
	    cout<<'\n';
	}
	
	return 0;
}
```

## [P04. Petya and Strings ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04 )

```
#include<bits/stdc++.h>
using namespace std;
string trsfm(string s){
	for(int i=0; i<s.length(); i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	return s;
}
/*

    // using transform() function and ::toupper in STL 
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
*/
int main(){
	cin.tie(0)->sync_with_stdio(0);
	
	string str1,str2;
	cin>>str1>>str2;
	str1 = trsfm(str1);
	str2 = trsfm(str2);
	if(str1<str2){
		cout<<-1;
	}else if(str1>str2){
		cout<<1;
	}else{
		cout<<0;
	}

	return 0;
}
```

## [P05. Football ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P05 )

```
#include<bits/stdc++.h>
using namespace std;	

int main(){
	cin.tie(0)->sync_with_stdio(0);
	
	string str;
	cin>>str;
	int cnt=0;
	for(int i=1; i<str.length(); i++){
		if(str[i]==str[i-1]){
			cnt++;
			if(cnt==6){
				cout<<"YES";
				return 0;
			}
		}else{
			cnt=0;
		}
	}
	cout<<"NO";

	return 0;
}
```

## [P06. Helpful Maths ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P06 )

```
#include<bits/stdc++.h>
using namespace std;	

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string str;
    cin>>str;

    vector<int>v;
    for(int i=0; i<str.length(); i+=2){
        int x =str[i] - '0';
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1; i<v.size();i++){
        cout<<"+"<<v[i];
    }
    cout<<'\n';
    return 0;
}
```


## [P07. String Task ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P07 )

```
#include<bits/stdc++.h>
using namespace std;	

int main(){
	cin.tie(0)->sync_with_stdio(0);
	
	string str,ans="";
	cin>>str;
	transform(str.begin(),str.end(),str.begin(),::tolower);
	for(char c: str){
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){

		}else{
			ans+='.';
			ans+=c;
		}
	}	
	cout<<ans<<endl;
	return 0;
}
```


## [P08. Cashier ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P08 )

```
#include<bits/stdc++.h>
using namespace std;	

int main(){
	cin.tie(0)->sync_with_stdio(0);
    int n,L,a,start=0,x,y,br=0;
    cin>>n>>L>>a;
    while(n--){
        cin>>x>>y;
        br += (x-start)/a;
        start = x+y;
    }
    br += ((L-start)/a);
    cout<<br<<endl;
	return 0;
}
```


## [P09. Phone Numbers ](https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P09 )

```
#include<bits/stdc++.h>
using namespace std;	

int main(){
	cin.tie(0)->sync_with_stdio(0);
    int n,noOfEight=0,phn=0;
    string str;
    cin>>n;
    cin>>str;
    for(char c: str){
        if(c=='8')
            noOfEight++;
    }
    phn = n/11;
    cout<<min(phn,noOfEight)<<endl;
    return 0;
}
```
