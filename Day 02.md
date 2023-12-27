# [Day 2 - Primes](https://codeforces.com/group/yg7WhsFsAp/contest/419146)

## [P13. Lost rectangle ]( https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P13)

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);

	ll a,ans=0;
	cin>>a;
	for(int i=1; i<=sqrt(a); i++){
		if(a%i==0){
			ans = i;
		}
	}
	cout<<2*(ans+a/ans)<<endl;
	return 0;
}
```


## [P14. Nearly Lucky Number ](https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P14 )

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);

    bool flag=false;
	ll cnt=0;
	string str;
	cin>>str;
	for(char c: str){
		if(c=='4'||c=='7'){
		    cnt++;
		    flag = true;
		}
	}

	while(cnt>0){
		int x = cnt%10;
		if(x==4||x==7){

		}else{
			flag=false;
			break;
		}
		cnt /= 10;
	}
	
	if(flag){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
}
```

## [P15. Lucky Division ](https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P15 )

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool almostLucky(int n){
	if(n% 4==0){
		return true;
	}else if(n%7 ==0){
		return true;
	}else if(n%47 ==0){
		return true;
	}else if(n%74 ==0){
		return true;
	}else if(n%44 ==0){
		return true;
	}else if(n%77 ==0){
		return true;
	}else if(n%444 ==0){
		return true;
	}else if(n%777 ==0){
		return true;
	}else if(n%447 ==0){
		return true;
	}else if(n%477 ==0){
		return true;
	}else if(n%774 ==0){
		return true;
	}else if(n%744 ==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin>>n;

	if(almostLucky(n)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
```


## [P16. Almost Prime ](https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P16 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);

	int n,cnt=0;
	cin>>n;

	for(int i=6; i<=n; i++){
		int x=i;
		set<int>s;

		//checks for prime factor
		if(x%2==0){
			s.insert(2);
			while(x%2==0){
				x/=2;
			}
		}
		for(int p=3; p<=sqrt(x); p+=2){
			if(x%p==0){
				s.insert(p);
				while(x%p==0){
					x/=p;
				}
			}
		}
		if(x>2){
			s.insert(x);
		}
		if(s.size()==2)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
```
### Better Approach

```
#include<bits/stdc++.h>
using namespace std;
int p[3005];
void sieve()
{
	memset(p, 0, sizeof p);
	p[1] = 1;
	for(int i = 2; i <= sqrt(3000); i++)
		if(p[i] == 0)
			for(int j = i; j <= 3000; j += i)
				if(p[j] == 0)
					p[j] = i;
	for(int i = 1; i <= 3000; i++)
		if(p[i] == 0)
			p[i] = i;
}
bool ganngto(int x)
{
	int dem = 0;
	while(x > 1)
	{
		int t = p[x];
		while(x % t == 0)
			x /= t;
		dem++;
	}
	return (dem == 2);
}
int main()
{
	sieve();
	int n=20;
	// cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++)
		if(ganngto(i))
			ans++;
	cout << ans<<endl;
	return 0;
}
```

## [P17. Buying a TV Set](https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P17 )

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
  
int gcd(int x, int y){
    if(x==0)
        return y;
    if(y==0)
        return x;
    if(x==y)
        return x;
    if(x>y)
        return gcd(x-y,y);
        
    return gcd(x,y-x);
}

int main(){
    ll a,b,x,y;
    cin>>a>>b;
    cin>>x>>y;
    
    ll gc = gcd(x,y); //euclidean gcd
    // ll gc = __gcd(x,y);
    
    x/=gc;
    y/=gc;
    cout<<min((a/x),(b/y))<<endl;
	return 0;
}
```


## [P18. Bachgold Problem ](https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P18 )

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<"\n";
    }else{
        cout<<((n-3)/2)+1<<"\n";
        cout<<3<<" ";
        n-=3;
    }
    while(n>0){
        cout<<2<<" ";
        n-=2;
    }
    cout<<endl;
	return 0;
}
```

## [P19. Mountain peaks ](https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P19 )

```

```


## [ ]( )

```

```

## [ ]( )

```

```


## [ ]( )

```

```

## [ ]( )

```

```


## [ ]( )

```

```

