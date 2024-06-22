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

```     
## [F. Bus to Udayland](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/F)
```

```  
## [G. Memory and Crow](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/G)
```

```    
## [H. Memory and Trident](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/H)
```

```     
## [I. King Moves](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/I)
```

```    
## [J. Letters Cyclic Shift](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/J)
```

```     
## [K. Tetris](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/K)
```

```     
## [L. Mahmoud and Ehab and the even-odd game](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/L)
```

```    
## [M. Mahmoud and Ehab and the message](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/M)
```

```    
## [N. Lecture Sleep](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/N)
```

```  
## [O. Feed the cat](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/O)
```

```    