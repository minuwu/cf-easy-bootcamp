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
#include <bits/stdc++.h>
using namespace std;
int pressed[4][4];
int toggled[4][4];
int main(){

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cin >> pressed[i][j];
            toggled[i][j] = pressed[i][j];
        }
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            if(pressed[i][j] != 0){
                toggled[i][j - 1] += pressed[i][j];
                toggled[i][j + 1] += pressed[i][j];
                toggled[i - 1][j] += pressed[i][j];
                toggled[i + 1][j] += pressed[i][j];

            }
        }
    }
    for (int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            if(toggled[i][j] % 2) cout << "0";
            else cout << "1";
        }
        cout << '\n';
    }
    return 0;
}
```

## [P67. Eating Soup](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P67)

```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, m;
	cin >> n >> m;
	cout << (m ? min(m, n - m) : 1) << endl;
	return 0;
}
```

## [P68. I Wanna Be the Guy](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P68)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n,p;
    cin>>n;
    set<int>s;
    for(int i=0; i<2; i++){
        cin>>p;
        for(int j=0; j<p; j++){
            int x; cin>>x;
            s.insert(x);
        }
    }
    cout<<((n==s.size()) ? "I become the guy.": "Oh, my keyboard!");
    
    return 0;
}
```
## [P69. Meme problem](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P69)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int ans=0,x=1;
    string str;
    getline(cin,str);
    for(auto c: str){
        if(c<='9' && c>='0'){
            ans*=10;
            ans+=(c-'0');
        }
    }
    if(str[0]=='i') x=4;
    if(str[0]=='l') x=8;
    cout<<ans*x<<endl;
    return 0;
}
```

## [P70. Megacity](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P70)

```
#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x, y, z;
    double d = sqrt(x*x + y*y);
    Point(int x, int y, int z) : x(x), y(y), z(z) {
        // cout<<x<<" "<<d<<endl;
    };
    bool operator<(const Point &other) const {
        return d < other.d;
    };
};
int main(){
    int n, s, x= 1e6;
    cin>>n>>s;
    vector<Point>points;
    for(int i=0; i<n; i++){
        int a, b, c;
        cin>>a>>b>>c;
        points.push_back(Point(a,b,c));
        // cout<<a<<b<<c<<endl;
    }
    sort(points.begin(),points.end());
    for(int i=0; i<n; i++){
        s+=points[i].z;
        if(s>=x){
            cout<<setprecision(16)<<points[i].d<<endl;
            return 0;
        }
    }
    cout<<(-1)<<endl;
    return 0;
}
```

## [P71. Love "A"](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P71)

```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int a=0, notA=0;
    cin>>str;
    for(char c: str){
        if(c=='a'){
            a++;
        }else{
            notA++;
        }
    }
    if(a>notA){
        cout<<str.length()<<endl;
    }else{
        cout<<(a*2-1)<<endl;
    }
}
```

## [P72. Hate "A"](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P72)

```

```

## [P73. Boxers](https://codeforces.com/group/yg7WhsFsAp/contest/355506/problem/P73)

```

```
