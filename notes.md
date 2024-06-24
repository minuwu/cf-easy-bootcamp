## Notes

### [Convert To Decimal 2](https://vjudge.net/problem/Gym-287309X)

- Convert N to its binary representation.
- Count number of ones in the above binary representation.
- Print the equivalent decimal number that its binary representation has only the number of ones that were counted above.
- For example: (10)decimal = (1010)binary has 2 ones "11", after converting "11" to decimal number it will become 3.
<details>
<summary>Solution</summary>
<pre>
<code>void solve(){
	int n; cin>> n;
	cout<< (1<< (__builtin_popcount(n))) - 1 << '\n';
}</code>
</pre>
</details>

<details>
<summary>Solution</summary>
<pre>
<code>void testcase(int ic){
	int n;
	cin>> n;
	int x = 0;
	while(n){
		x += (n&1);
		n >>= 1;
	}
	cout<< (1 << x) - 1 <<"\n";
}</code>
</pre>
</details>

---

### [Problem](linkToProblem)

- Some details about the problem
- Some details about the problem

<details>
<summary>Solution</summary>
<p>Some description about solution.</p>
<pre>
<code>void solve(){
	//some code
}</code>
</pre>
</details>

---
