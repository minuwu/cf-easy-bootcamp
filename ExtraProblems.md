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

```     
## [C. Points in Segments](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/C)
```

```    
## [D. Romaji](https://codeforces.com/group/yg7WhsFsAp/contest/355508/problem/D)
```

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