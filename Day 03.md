# [Day 3 - Sorting ](https://codeforces.com/group/yg7WhsFsAp/contest/355494 )



## [P24. Bubble sort ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P24 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int p=1; p<n; p++){
        for(int q=0; q<n-p; q++){
            if(v[q]>v[q+1]) swap(v[q],v[q+1]);
        }
        
        for(auto i: v) cout<<i<<" ";
        cout<<endl;
        
    }
     
     return 0;
}
```


## [P25. The price is right! ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P25 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,min_idx=0,min_price=INT_MAX;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<min_price){
            min_price = x;
            min_idx = i;

        }
    }
    cout<<min_idx<<endl;
    return 0;
}
```


## [P26. Selection sort ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P26 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int p=0; p<n-1; p++){
        int min_val=v[p],min_idx=p;
        for(int q=p+1; q<n; q++){
            if(v[q]<min_val){
                min_val= v[q];
                min_idx= q;
            }
        }
        swap(v[p],v[min_idx]);
        for(auto a: v)cout<<a<<" ";
        cout<<endl;
    }

    return 0;
}
```


## [P27. Scores in Order ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P27 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>v;
    v.push_back(INT_MIN);
    for(int i=0; i<n; i++){
        int x;  cin>>x;
        for(int j=0; j<=i; j++){
            if(x>v[j]){
                v.insert(v.begin()+j,x);
                cout<<j+1<<"\n";
                break;
            }
        }
    }
    for(int i=0; i<n; i++)cout<<v[i]<<" ";

    return 0;
}
```


## [P28. Gravity Flip ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P28 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio;
    
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(auto i: v){
        cout<<i<<" ";
    }
    
    return 0;
}
```


## [P29. New Year Garland ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P29 )

```
#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<char,int>x, pair<char,int>y){
    return (x.second<y.second);
}
int32_t main(){
    cin.tie(0)->sync_with_stdio;
    
    int n;cin>>n;
    while(n--){
        vector<int>v(3);
        for(int i=0; i<3; i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        if(v[2]-1<=(v[0]+v[1])){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        
    }
    return 0;
}
```


## [P30. Temporarily unavailable](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P30 )

```
#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<char,int>x, pair<char,int>y){
    return (x.second<y.second);
}
int32_t main(){
    cin.tie(0)->sync_with_stdio;
    
    int n;cin>>n;
    while(n--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        vector<pair<char,int>>v;
        int a,b,c,d;
        a=(p<q)?p:q;
        b=(p<q)?q:p;
        c=r-s;
        d=r+s;
        v.clear();
        v.push_back(make_pair('a',a));
        v.push_back(make_pair('b',b));
        v.push_back(make_pair('c',c));
        v.push_back(make_pair('d',d));
        // for(auto i: v) cout<<i.first<<" "<<i.second<<" ";
        sort(v.begin(),v.end(),cmp);
        // for(auto i: v) cout<<i.first<<" "<<i.second<<" ";
        
        if(v[0].first=='a' && v[3].first=='b'){
            cout<<(v[1].second-v[0].second)+(v[3].second-v[2].second)<<"\n";
        }else if( (v[0].first=='a' && v[1].first=='b') || (v[2].first=='a' && v[3].first=='b')  ){
            if(v[0].first=='a'){
                cout<<(v[1].second-v[0].second)<<"\n";
            }else{
                cout<<(v[3].second-v[2].second)<<"\n";
            }
        }else if( v[0].first=='a' && v[2].first=='b'){
            cout<<(v[1].second-v[0].second)<<"\n";
        }else if(v[1].first=='a' && v[3].first=='b'){
            cout<<(v[3].second-v[2].second)<<"\n";
        }else{
            cout<<"0\n";
        }
        
    }
    return 0;
}
```


## [P31. Shuffle Hashing ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P31 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n;  cin>>n;
    while(n--){
        string pass,hash,x;
        cin>>pass>>hash;
        bool flag= false;
        int sp= pass.size(), sh= hash.size();
        sort(pass.begin(),pass.end());
        for(int i=0; i<=sh-sp; i++){
            x = hash.substr(i,sp);
            sort(x.begin(),x.end());
            if(x==pass){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        
    }
    
    return 0;
}

```


## [P32. Grow The Tree ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P32 )

```
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    cin.tie(0)->sync_with_stdio;
    
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    // for(auto i:v)cout<<i<<" ";
    sort(v.begin(),v.end());
    int x=0,y=0;
    for(int i=0; i<n/2; i++){
        x+=v[i];
    }
    for(int i=n/2; i<n; i++){
        y+=v[i];
    }
    cout<<(x*x)+(y*y)<<"\n";
    return 0;
}
```


## [P33. Thanos Sort ](https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P33 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin>>n;
    vector<int>v(n,0);
    for(int i=0; i<n; i++) cin>>v[i];
    bool flag = false;
    
    for(int box = n; box>=1; box/=2){
        if(flag){
            break;
        }
                    
        int blocksize= box;
        for(int start=0; start<(n); start+=blocksize){
            int cnt=1;
            for(int element=1; element<blocksize; element++){
                if(v[element+start]>=v[element+start-1]){
                    cnt++;
                }
            }
            
            if(cnt==blocksize){
                cout<<cnt;
                flag = true;
                break;
            }
        }
    }
    
    return 0;
}

```
