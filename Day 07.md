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

```


## [P61. Cells Not Under Attack](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P61)

```

```


## [P62. Sereja and Suffixes](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P62)

```

```


## [P63. PolandBall and Game](https://codeforces.com/group/yg7WhsFsAp/contest/355505/problem/P63)

```

```

