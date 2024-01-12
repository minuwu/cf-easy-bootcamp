# [Day 4 - Math I](https://codeforces.com/group/yg7WhsFsAp/contest/355496 )


## [P35. Minutes Before the New Year ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P35)

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    int n; cin>>n;
    while(n--){
        int h,m;
        cin>>h>>m;
        cout<<(24*60 -(h*60+m))<<endl;
    }
    
    return 0;
}
```

## [P36. Little C Loves 3 I ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P36 )

```
#include<bits/stdc++.h>
using namespace std;
int main (){
    cin.tie(0) -> sync_with_stdio(0);
    
    int n; cin>>n;
    if((n-2)%3==0){
        cout<<n-3<<" 2 1\n"<<endl;
    }else{
        cout<<n-2<<" 1 1\n"<<endl;
    }
    
    return 0;
}
```

## [P37. Make Product Equal One ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P37 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    long long n,x,neg=0,zero=0,coin=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x<0){
            coin += (abs(x)-1);
            neg++;
        }else{
            if(x==0) zero++;
            coin += abs(x-1);
        }
    }
    
    if(neg%2!=0 && zero==0){
        cout<<coin+2<<endl;
    }else{
        cout<<coin<<endl;
    }
    
    return 0;
}
```

## [P38. Vasya and Golden Ticket ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P38 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,csum=0;
    string str,temp="";
    cin>>n>>str;
    for(char c:str){
        if(c!='0'){
            temp+=c;
        }
    }
    str = temp;
    n=str.size();
    if(n==0){
        cout<<"YES\n";
        return 0;
    }
    for(int i=0; i<n-1; i++){
        csum += str[i]-'0';
        int rsum = 0;
        for(int j=i+1; j<n; j++){
            rsum+= str[j]-'0';
            if(rsum==csum){
                rsum=0;
            }
        }
        if(rsum==0){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
    
}
```

## [P39. Vitamins ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P39 )

```
#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
map<string, int> was;
int getC(string a, string b) {
    if (!was.count(a) || !was.count(b)) {
        return INF;
    }
    return was[a] + was[b];
}
int main () {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        string s;
        cin >> c >> s;
        sort(s.begin(), s.end());
        if (was.count(s) == 0) {
            was[s] = c;
        } else {
            was[s] = min(was[s], c);
        }
    }
    
    int ans = INF;
    if (was.count("A") && was.count("B") && was.count("C")) {
        ans = was["A"] + was["B"] + was["C"];
    }
    if (was.count("ABC")) {
        ans = min(ans, was["ABC"]);
    }
    ans = min(ans, getC("AB", "C"));
    ans = min(ans, getC("A", "BC"));
    ans = min(ans, getC("AC", "B"));
    ans = min(ans, getC("AB", "BC"));
    ans = min(ans, getC("AC", "BC"));
    ans = min(ans, getC("AC", "AB"));
    if (ans == INF) {
        ans = -1;
    }
    
    cout << ans << endl;
    return 0;
}
```

## [P40. Candies 2 ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P40 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,l,r;
    cin>>n>>q;
    vector<int>v(n),p(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    p[0]=v[0];
    for(int i=1; i<n; i++)  p[i] = p[i-1] + v[i];
    while(q--){
        cin>>l>>r;
        if(l==0){
            cout<<p[r]<<endl;
        }else{
            cout<<p[r]-p[l-1]<<endl;
        }
    }
    
    return 0;
    
}
```

## [P41. Fancy Prime Counter ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P41 )

```
#include<bits/stdc++.h>
using namespace std;
vector<int>isPrime(300009,1),primeprefix(300009,0);
void sieve(){
    isPrime[0]=isPrime[1]=0;
    for(int i=2; i*i<300009; i++){
        if(isPrime[i]){
            for(int j=i*i; j<300009; j+=i){
                isPrime[j]=0;
            }
        }
    }
    return;
}
void primePrefix(){
    primeprefix[0]=isPrime[0];
    for(int i=1; i<300009; i++){
        primeprefix[i]= isPrime[i]+primeprefix[i-1];
    }
    return;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    sieve();
    primePrefix();
    int q;
    cin>>q;
    while(q--){
        int l,r,cnt=0;
        cin>>l>>r;
        if(l==0){
            cout<<primeprefix[r]<<endl;
        }else{
            cout<<primeprefix[r]-primeprefix[l-1]<<endl;
        }
    }
    return 0;
}
```

## [P42. Benches ](https://codeforces.com/group/yg7WhsFsAp/contest/355496/problem/P42 )

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n,m,a;
    cin>>n>>m;
    vector<int>v(n,0);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k=m,ans2=v[n-1]+k;
    for(int i=0; k>0 && i<n-1; i++){
        if(v[i]<v[n-1]){
            int temp = v[n-1] - v[i];
            v[i]+=(temp);
            k-=temp;
        }
    }
    int ans1 = v[n-1];
    if(k>0){
        if(k%n==0){
            ans1+=k/n;
        }else{
            ans1+= k/n+1;
        }
    }
    
    cout<<ans1<<" "<<ans2<<"\n";
    
    return 0;
}
```


