# [Exam 03](https://codeforces.com/group/yg7WhsFsAp/contest/355507)
---

## [A. Easter Eggs](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/A)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    if(n%7==0){
        for(int i=0; i<n/7; i++){
            cout<<"ROYGBIV";
        }
    }else{
        for(int i=0; i<n/7; i++){
            cout<<"ROYGBIV";
        }
        if(n%7==1){
            cout<<"G";
        }else if(n%7==2){
            cout<<"GB";
        }else if(n%7==3){
            cout<<"GBI";
        }else if(n%7==4){
            cout<<"GBIV";
        }else if(n%7==5){
            cout<<"GBIVG";
        }else if(n%7==6){
            cout<<"GBIVGB";
        }
    }
    
    return 0;
}
```

## [B. Check Permutation](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/B)

```
#include<bits/stdc++.h>
using namespace std;
vector<bool> v(300000,false);

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v[x] = true;
    }
    for(int i=1; i<=n; i++){
        if(v[i]==false){
            cout<<"NO";
            return 0 ;
        }
    }
    cout<<"YES";
    
    return 0;
}
```

## [C. Gotta Catch 'Em All](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/C)

```
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
unordered_set<int> s;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        s.insert(x);
        v.push_back(s.size());
    }
    for(auto a: v){
        cout<<a<<" ";
    }
    return 0;
}
```

## [D. Even Substrings](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/D)

```
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, ans=0; cin>>n;
    string str; cin>>str;
    for(int i=str.size()-1; i>=0; i--){
        int x = str[i] - '0';
        if(x%2==0){
            ans+=(i+1);
        }
    }
    cout<<ans;
    
    return 0;
}
```

## [E. Fast Recursion](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/E)

```
#include <iostream>
#include <vector>
using namespace std;
vector<long long> cnt_memo;
long long cnt(long long n) {
    cnt_memo.resize(n + 1, -1);
    cnt_memo[0] = 1;
    for (long long i = 1; i <= n; ++i) {
        cnt_memo[i] = cnt_memo[i - 1] + cnt_memo[i / 2] + cnt_memo[i / 3];
    }
    return cnt_memo[n];
}

int main() {
    int n; cin>>n;
    cout << cnt(n) << endl;
    return 0;
}

```

## [F. Sushi for Two](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/F)

```
#include<bits/stdc++.h>
typedef long long ll;
#define pb(x) push_back(x)
using namespace std;
int main (){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n,i;
    cin >> n;
    vector<ll> v(n), ans;
    for (auto &it : v) cin >> it;
    ll one, two ;
    one = two = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == 1) {
            one++;
            if (two) ans.pb(two);
            two = 0;
        }
        else {
            two++;
            if (one) ans.pb(one);
            one = 0;
        }
    }
    if (one) ans.pb(one);
    if (two) ans.pb(two);

    ll final = 0;
    for (i = 0; i < ans.size() - 1; i++){
        final = max(final, 2 * (min(ans[i], ans[i + 1])));
    }

    cout << final << endl;
    return 0;
}
```

## [G. Just gold](https://codeforces.com/group/yg7WhsFsAp/contest/355507/problem/G)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q; cin>>n>>q;
    string str; cin>>str;
    vector<int>gold,silver,bronze;
    int g=0, s=0, b=0;
    str = 'X' +str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='G'){
            g++;
        }else if(str[i]=='S'){
            s++;
        }else if(str[i]=='B'){
            b++;
        }
        gold.push_back(g);
        silver.push_back(s);
        bronze.push_back(b);
    }
    for(int i=0; i<q; i++){
        int l=0, r=0; cin>>l>>r;
        // l--; r--;
    
        int g = gold[r] - gold[l-1];
        int s = silver[r] - silver[l-1];
        int b = bronze[r] - bronze[l-1];
        // cout<<g<<" "<<s<<" "<<b<<" ";
        if(l==r){
            cout<<str[l]<<endl;
        } else if (g>0){
            cout<<"G"<<endl;
        }else if(s>0){
            cout<<"S"<<endl;
        }else if(b>0){
            cout<<"B"<<endl;
        }
    }
   
   return 0;

}
```




---


