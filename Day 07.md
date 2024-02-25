# [Day 07 - Practice I](https://codeforces.com/group/yg7WhsFsAp/contest/355505)

## [P59. World Cup](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P59)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int mn = INT_MAX;
    int ind = INT_MAX;
    for (int i = 0; i < n; i++) {
        a[i] -= i;
        int jumps = i + ((a[i] + n - 1) / n) * n;
        if (jumps < mn) {
            mn = jumps;
            ind = i;
        }
    }
    cout << ind + 1;
    return 0;
}
```


## [P60. Queries about less or equal elements](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P60)

```
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    ll n,m; cin>>n>>m;
    vector<ll>a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a.begin(),a.end());
    for(int i=0; i<m; i++){
        ll x = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout<<x<<" ";
    }
    return 0;
}
```


## [P61. Cells Not Under Attack](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P61)

```
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n, m;
    cin>>n>>m;
    int r= n, c= n;
    vector<bool>row(n, false), col(n, false);
    while(m--){
        int x,y;
        cin>>x>>y;
        x--; y--;
        if(!row[x]){
            row[x] = true;
            r--;
        }
        if(!col[y]){
            col[y] = true;
            c--;
        }
        cout<<r*c<<" ";
    }
    cout<<endl;
    return 0;
}
```


## [P62. Sereja and Suffixes](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P62)

```
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n, m;
    cin>>n>>m;
    vector<int>v(n,0);
    for(int i=0; i<n; i++)  cin>>v[i];
    unordered_set<int>s;
    
    for(int i=n-1; i>=0; i--){
        s.insert(v[i]);
        v[i] = s.size();
    }
    
    while(m--){
        int x;
        cin>>x;
        x--;
        cout<<v[x]<<"\n";
        
    }
    return 0;
}
```


## [P63. PolandBall and Game](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P63)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, common=0, cntn=0, cntm=0; 
    cin>>n>>m;
    unordered_set<string>s;
    for(int i=0; i<(n+m); i++){
        string str; cin>>str;
        s.insert(str);
    }
    common = (n+m) - s.size();
    cntn = n-common;
    cntm = m-common;
    if(common&1) cntn++;
    if(cntn>cntm) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
```

