# [Day 06 - Searching](https://codeforces.com/group/yg7WhsFsAp/contest/355504)


## [P51. The missing one](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P51)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,x;
    cin>>n;
    x= n*(n+1)/2;
    --n;
    while(n--){
        int y;  cin>>y;
        x-=y;
    }
    cout<<x<<endl;
    return 0;
}
```

## [P52. Amr and The Large Array](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P52)
```
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
vector <int> a[N];
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int mx = 0, b = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(mx, x);
        a[x].push_back(i + 1);
    }
    for(int i = 1; i <= mx; i++)
    {
        b = max(b, (int)a[i].size());
    }
    int l, r, p, q, t = 2e9;
    for(int i = 1; i <= mx; i++)
    {
        if(a[i].size() < b) continue;
        p = a[i][0];
        q = a[i].back();
        if(q - p + 1 < t)
        {
            l = p;
            r = q;
            t = q - p + 1;
        }
    }
    cout << l << " " << r << "\n";
}
```

## [P53. The odd one's out (easy)](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P53)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    map<int,int>mp;
    int n;  cin>>n;
    for(int i=0; i<n; i++){
        int x;  cin>>x;
        mp[x]++;
    }
    int ans=0;
    for(auto i: mp){
        if(i.second%2!=0){
            ans = i.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}
```

## [P54. The odd one's out (hard)](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P54)
```
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n,x,ans=0;
    cin>>n;
    while(n--){
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;
    return 0;
}
```

## [P55. Lost](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P55)
```
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0; i<n; i++){
        int x;  cin>>x;
        mp[x] = i;
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        if(mp.count(x)){
            cout<<mp[x]<<endl;
        }else{
            cout<<"-1\n";
        }
    }
    return 0;
}
```

## [P56. Nails](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P56)
```
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin>>n;
    vector<ll> arr(n);
    int MAX=0,idx=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        ll x;
        cin>>x;
        auto k = upper_bound(arr.begin(),arr.end(),x);
        cout<<*k<<'\n';
       
    }
    return 0;
}
```

## [P57. Limak and the function](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P57)
```
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    ll n;
    cin>>n;
    ll l=0,r=1e9+1,ans=0;
    while (l<=r)
    {
        ll mid=(l+r)/2;
        ll k= mid*mid  + 100*mid + mid/3LL;
        if(k==n){
            ans=mid;
            break;
        }else if(k<n){
            l=mid+1;
        }else{
            r=mid-1;
        }
 
    }
    cout<<ans;
    
    return 0;
}
```

## [P58. Letters](https://codeforces.com/group/yg7WhsFsAp/contest/355504/problem/P58)
```
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;
    vector<ll> vec(n),pref(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    pref[0]=vec[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+vec[i];
    }
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        auto it= lower_bound(pref.begin(),pref.end(),x);
        if(it-pref.begin()+1==1){
            cout<<it-pref.begin()+1<<" "<<x<<'\n';
        }else{
            cout<<it-pref.begin()+1<<" "<<x-*(--it)<<'\n';
        }
    }
    return 0;
}
```
