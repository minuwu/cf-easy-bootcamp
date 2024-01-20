# [Exam 02](https://codeforces.com/group/yg7WhsFsAp/contest/355499)


## [A. Profits](https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/A)

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    ll n,x,sum=0,cnt=0,ans=-1;
    cin>>n>>x;
    while(n--){
        ll temp;
        cin>>temp;
        sum+=temp;
        cnt++;
        if(sum>=x){
            ans=cnt;
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
```

## [B. Heist](https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/B)

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    ll n,x;
    cin>>n;
    vector<ll>v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<((v[n-1]-v[0]+1))-n<<endl;
    
    
    return 0;
}
```

## [C. Generous Kefa](https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/C)

```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n,k;
    string str;
    cin>>n>>k>>str;
    map <char,int> mp;
    for(char c: str){
        mp[c]++;
    }
    int mx = 0;
    for(auto &i: mp){
        if(i.second>mx)
            mx = i.second;
    }
    if(mx<=k){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
```

## [D. Fibonacci Sum](https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/D)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    long long n;
    cin>>n;
    set<int>mp;
    long long a = 0, b=1;
    mp.insert(a);
    mp.insert(b);
    while(b<=n){
        long long temp = a+b;
        mp.insert(temp);
        a= b;
        b= temp;
    }
    // for(auto i: mp) cout<<i<<" ";
    // cout<<endl;
    
    for(long long x : mp){
        if(mp.count(n-x)){
            cout << "yes\n";
            return 0;
        }
    }
    cout << "no\n";
    
    return 0;
}
```

## [E. Little Elephant and Magic Square](https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/E)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    vector<vector<int>>v(3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    
    v[0][0] = (v[1][0]+v[1][2]+ (v[1][0]+v[1][2])/2) - v[0][1] - v[0][2];
    v[1][1] = (v[1][0]+v[1][2]+ (v[1][0]+v[1][2])/2) - v[1][0] - v[1][2];
    v[2][2] = (v[1][0]+v[1][2]+ (v[1][0]+v[1][2])/2) - v[2][0] - v[2][1];
    
    
    for(auto &i: v){
        for(auto &j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

## [F. Eratosthenes sieve revisited](https://codeforces.com/group/yg7WhsFsAp/contest/355499/problem/F)

```
 #include<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    ll a,b,ans=0; 
    cin>>a>>b;
    vector<bool>prime(b-a+5, 1);
    for(ll i = 2; i*i<=b; i++){
        for(ll j = max(i*i, (a+i-1)/i*i); j<=b; j+=i){
            prime[j-a] = 0;
        }
    }
    if(a==1)prime[0] = 0;
    for(int i = a; i<=b; i++){
        ans+=prime[i-a];
    }
    cout<<ans;
     
    return 0;
 }
```







