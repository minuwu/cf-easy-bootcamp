# [Exam 01](https://codeforces.com/group/yg7WhsFsAp/contest/355495)



## [A - 2-Sum](https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/A)

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    long long n,x;
    cin>>n>>x;
    vector<long long>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    bool flag = false;
    for(int i=0; i<n-1; i++){
        long long p=x-v[i];
        for(int j=i+1; j<n; j++){
            if(p==v[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag)    cout<<"YES\n";
    else        cout<<"NO\n";
    
    return 0;
}
```

## [B - H4x0r](https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/B)

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    string str;
    cin>>str;
    for(char c: str){
        if(c=='a'){
            cout<<'4';
        }else if(c=='i'){
            cout<<'1';
        }else if(c=='e'){
            cout<<'3';
        }else if(c=='o'){
            cout<<'0';
        }else if(c=='s'){
            cout<<'5';
        }else{
            cout<<c;
        }
    }
    cout<<endl;
    return 0;
}
```

## [C - Square of Sticks 2](https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/C)

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    long long n,ans=0;    cin>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    if(n<4) cout<<0<<endl;
    else cout<<(v[3]*v[3])<<endl;
    
    return 0;
}
```

## [D - Amusing Joke](https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/D)

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    str1+=str2;
    
    sort(str1.begin(),str1.end());
    sort(str3.begin(),str3.end());
    
    if(str1==str3){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}
```

## [E - Super Prime](https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/E)

```
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
vector<bool>isPrime(N,true);
void sieve(){
    isPrime[0] = isPrime[1]= false;
    for(int i=2; i<=sqrt(N); i++){
        if(isPrime[i]){
            for(int j=i*i; j<=N; j+=i)
                isPrime[j]= false;
        }
    }
    return;
}
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    sieve();
    int n; cin>>n;
    vector<long long>p;
    for(int i=1; i<=n; i++){
        if(isPrime[i]) p.push_back(i);
    }
    int cnt=0;
    for(int i=1; i<p.size(); i++){
        if(isPrime[p[i]-2]) cnt++;
    }
    cout<<cnt<<endl;
    
    return 0;
}
```

## [F - Appleman and Card Game](https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/F)

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    long long n,k,ans=0;
    cin>>n>>k;
    string str;
    cin>>str;
    vector<long long>v(26,0);
    for(char c: str){
        v[(c-'A')]++;
    }
    sort(v.begin(),v.end(),greater<long long>());
    for(int i=0; k>0; i++){
        if(v[i]<=k){
            long long x=v[i]*v[i];
            ans+=x;
            k-=v[i];
        }else{
            long long x=k*k;
            ans+=x;
            k=0;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
```


