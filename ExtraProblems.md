# [Extra Problems](https://codeforces.com/group/yg7WhsFsAp/contest/355508)
---

## [A. The Rank](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/A)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int>v;
    while(n--){
        int x=0, y=0;
        for(int i=0; i<4; i++){
            cin>>y;
            x+=y;
        }
        v.push_back(x);
    }
    int rank=1, mark = v[0];
    for(int i=1; i<v.size(); i++){
        if(mark<v[i]) rank++;
    }
    cout<<rank<<endl;
    return 0;
}
```  
## [B. Death Note](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/B)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, m, names=0; cin>>n>>m;
    while(n--){
        int x; 
        cin>>x;
        names+=x;
        
        if(names>=m){
            cout<<names/m<<" ";
            names%=m;
        }else{
            cout<<"0 ";
        }
    }
    
    return 0;
}
```     
## [C. Points in Segments](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/C)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
  
    int n, m, x, y;
    cin>>n>>m;
    vector<bool>v(m+1, 1);
    while(n--){
        cin>>x>>y;
        for(int i=x; i<=y; i++) v[i]=0;
    }
    int count=0;
    vector<int>ans;
    for(int i=1; i<=m; i++){
        if(v[i]){
            ans.push_back(i);
            count++;
        }
    }
    cout<<count<<endl;
    for(auto a: ans) cout<<a<<" ";
    
    return 0;
}
```    
## [D. Romaji](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/D)
```
#include<bits/stdc++.h>
using namespace std;
bool isConsonent(char ch){
    if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u' ){
        return false;
    }else{
        return true;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
  
    string str;
    cin>>str;
    
    for(int i=0; i<str.size(); i++){
        if(isConsonent(str[i])){
            if(i==str.size() -1 && str[i]=='n'){
                cout<<"YES";
                return 0;
            }else if(i==str.size() -1 && str[i]!='n'){
                cout<<"NO";
                return 0;
            }else if(str[i]=='n'){
                
            }
            else{
                if(isConsonent(str[i+1])){
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
  
    return 0;
}
```    
## [E. Segment Occurrences](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/E)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, m, q, l, r;
    string s, t;
    cin>>n>>m>>q;
    cin>>s>>t;
  
    int arr[1005]; 
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i <= n - m; ++i){
         arr[i + 1] = arr[i] + (s.substr(i, m) == t);
    }
        
    while (q--){
        cin >> l >> r;
        if (r - l + 1 < m)
            cout << "0" << endl;
        else
            cout << arr[r - m + 1] - arr[l - 1] << endl;
    }
    
    return 0;
}
```     
## [F. Bus to Udayland](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/F)
```
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n; cin>>n;
    char ch[n+5][5];
    for(int i=0; i<n; i++){
        cin>>ch[i][0]>>ch[i][1]>>ch[i][2]>>ch[i][3]>>ch[i][4];
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        if(ch[i][0] == ch[i][1] && ch[i][0] == 'O'){
            ch[i][0] = '+';
            ch[i][1] = '+';
            flag = true;
            break;
        }
        if(ch[i][3] == ch[i][4] && ch[i][3] == 'O'){
            ch[i][3] = '+';
            ch[i][4] = '+';
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
        for(int i=0; i<n; i++){
            cout<<ch[i][0]<<ch[i][1]<<ch[i][2]<<ch[i][3]<<ch[i][4]<<"\n";
        }
    }else{
        cout<<"NO\n";
    }
    
    return 0;
}
```  
## [G. Memory and Crow](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/G)
```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, x;
    cin>>n;
    vector<ll> v;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=1; i<n; i++){
     v[i-1] = v[i] + v[i-1];   
    }
    for(auto a: v) cout<<a<<" ";
    
    return 0;
}
```    
## [H. Memory and Trident](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/H)
```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    string str;
    cin>>str;
    
    if(str.size()&1){
        cout<<"-1";
        return 0;
    }
    int x=0,y=0;
    for(int i=0; i < str.length(); i++){
        if(str[i]=='U')y++;
        if(str[i]=='D')y--;
        if(str[i]=='L')x--;
        if(str[i]=='R')x++;
    }
    cout << (abs(x)+abs(y))/2 << endl;

    return 0;
}
```     
## [I. King Moves](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/I)
```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    char c; int d; 
    cin>>c>>d;
    
    if((c=='a'||c=='h') && (d==1 || d==8)){
        cout<<3<<endl;
    }else if((c=='a'||c=='h') || (d==1 || d==8)){
        cout<<5<<endl;
    }else{
        cout<<8;
    }
    

    return 0;
}
```    
## [J. Letters Cyclic Shift](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/J)
```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    string str;
    cin>>str;
    bool flag = false;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='a'){
            if(i!=0 && flag){
                break;
            }else if(i==(str.size ()-1)){
                str[i] = 'z';
            }
        }else{
            flag = true;
            str[i] = str[i] - 1 ;
        }
    }
    cout<<str<<endl;

    return 0;
}
```     
## [K. Tetris](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/K)
```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, m, ans=INT_MAX;
    cin>>n>>m;
    vector<int>v(n,0);
    for(int i=0; i<m; i++){
        int x; cin>>x;
        v[x-1]++;
    }
    for(auto a: v){
        ans= min(a, ans);
    }
    cout<<ans<<endl;
    
    return 0;
}
```     
## [L. Mahmoud and Ehab and the even-odd game](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/L)
```
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n; cin>>n;
    if(n&1){
        cout<<"Ehab";
    }else{
        cout<<"Mahmoud";
    }
    
    return 0;
}
```    
## [M. Mahmoud and Ehab and the message](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/M)
```
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, k, m;    cin>>n>>k>>m;
    vector<string> language;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        language.push_back(s);
    }
    vector<int>cost;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        cost.push_back(x);
    }
    while(k--){
        int x;  cin>>x;
        int lowest = INT_MAX;
        vector<int>change;
        for(int i=0; i<x; i++){
            int y; cin>>y;
            change.push_back(y);
            lowest = min(lowest, cost[y-1]);
        }
        for(auto a: change) cost[a-1]=lowest;
    }
    unordered_map<string, int>mp;
    for(int i=0; i<n; i++){
        mp[language[i]]=cost[i];
    }
    int total=0;
    for(int i=0; i<m; i++){
        string s; cin>>s;
        total += mp[s];
    }
    cout<<total<<endl;
    return 0;
}

// Note: Starting from C++17, structure bindings can be used.
// for(const auto& [key, value]: unordered_map)
```    
## [N. Lecture Sleep](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/N)
```
#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, k; cin>>n>>k;
    vector<int>lecture(n), state(n), awake(n+1), sleep(n+1);
    for(int i=0; i<n; i++) cin>>lecture[i];
    for(int i=0; i<n; i++) cin>>state[i];
    awake[0]=(0);
    sleep[0]=(0);
    int totalLecture = 0;
    for(int i=0; i<n; i++){
        if(state[i]==1){
            awake[i+1] = awake[i] + lecture[i];
            sleep[i+1] = sleep[i] + (0);
            totalLecture += lecture[i];
        }else{
            awake[i+1] = awake[i] + (0);
            sleep[i+1] = sleep[i] + lecture[i];
        }
    }
    int extra=0;
    for(int i=0; i<n-k+1; i++){
        extra = max(extra, (sleep[i+k]-sleep[i]));
    }
    cout<<totalLecture+extra<<endl;
    return 0;
}
```  
## [O. Feed the cat](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/O)
```

```    