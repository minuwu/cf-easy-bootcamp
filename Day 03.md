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

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```


## [ ]( )

```

```