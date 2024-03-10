# [Day 8 - Practice II](https://codeforces.com/group/yg7WhsFsAp/contest/355506)

## [P64. Banquet](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P64)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int q;  cin>>q;
    set<pair<string, string>> s;
    while(q--){
        char c;
        string str1, str2;
        cin>>c>>str1>>str2;
        switch(c){
            case '+':{
                s.insert(make_pair(str1,str2));
                break;
            }
            case '-':{
                auto it = s.find(make_pair(str1,str2));
                s.erase(it);
                break;
            }
            case '?':{
                if(s.find(make_pair(str1,str2)) != s.end() ){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }
                break;
            }
        }
    }
    
    return 0;
}
```

## [P65. Even Odds](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P65)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    long long x, k; 
    cin>>x>>k;
    if(k>((x+1)/2)){
        cout<<(k-(x+1)/2)*2<<endl;
    }else{
        cout<<(k*2)-1<<endl;
    }
    return 0;
}
```

## [P66. Lights Out](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P66)

```

```

## [P67. Eating Soup](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P67)

```

```

## [P68. I Wanna Be the Guy](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P68)

```

```
## [P69. Meme problem](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P69)

```

```

## [P70. Megacity](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P70)

```

```

## [P71. Love "A"](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P71)

```

```

## [P72. Hate "A"](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P72)

```

```

## [P73. Boxers](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P73)

```

```
