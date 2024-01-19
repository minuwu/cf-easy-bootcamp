# [Day 05 - Math II](https://codeforces.com/group/yg7WhsFsAp/contest/355498)


## [P43. Numbers on the circle](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P43)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    long long ans=1;
    int n=1; cin>>n;
    for(int i=2; i<=n; i++){
        ans*=i;
    }
    cout<<ans;
    
    return 0;
}
```


## [P44. Morse code](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P44)

```
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n, p;
    cin >> n ;
    vector<int> f{1, 1, 2};
    for (int i = 3; i <= n; i++) {
        f.push_back((f[i - 1] + f[i - 2]));
    }
    cout << f[n] << '\n';
    return 0;
}
```


## [P45. Collatz conjecture](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P45)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    long long n;
    cin>>n;
    while(n!=1){
        cout<<n<<"\n";
        if(n%2==0){
            n/=2;
        }else{
            n*=3;
            n++;
        }
    }
    cout<<1<<endl;
    
    return 0;
}
```


## [P46. Eleven](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P46)

```
#include<bits/stdc++.h>
using namespace std;
vector<bool>isFib(1010,false);
void fib(){
    int a=1, b=1, x=0;
    isFib[b]= true;
    while(b<=1000){
        x = a+b;
        isFib[x] = true;
        a = b;
        b = x;
    }
    return;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    fib();
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(isFib[i]){
            cout<<'O';
        }else{
            cout<<'o';
        }
    }
    cout<<endl;
    
    return 0;
}
```


## [P47. Hexadecimal's theorem](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P47)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin>>n;
    cout<<"0 0 "<<n<<endl;
    
    
    return 0;
}
```


## [P48. The line](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P48)

```
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n, p;
    cin >> n >> p;
    vector<int> f{1, 1, 2};
    for (int i = 3; i <= n; i++) {
        f.push_back((f[i - 1] + f[i - 2]) % p);
    }
    cout << f[n] << '\n';
    return 0;
}
```


## [P49. King Moves](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P49)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    char c; int d;
    cin>>c>>d;
    
    if( (c=='a'|| c=='h') &&(d==8 || d==1) ){
        cout<<3<<endl;
    }else if( d==8 || d==1 || c=='a' || c=='h'){
        cout<<5<<endl;
    }else{
        cout<<8<<endl;
    }
    
    return 0;
    
}
```


## [P50. Jzzhu and Sequences](https://codeforces.com/group/yg7WhsFsAp/contest/355498/problem/P50)

```
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long int a, b, t;
    cin >> a >> b >> t;
    long long int s[] = {a, b, b - a, -a, -b, a - b};
    cout << (s[(t - 1) % 6] % MOD + MOD) % MOD;
    return 0;
}
```



