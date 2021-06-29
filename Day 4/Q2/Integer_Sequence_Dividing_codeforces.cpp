#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	n %= 4;
	if (n == 0 || n == 3) {
		cout << 0 << endl;
	} else {
		cout << 1 << endl;
	}
}
// The first solution: take n modulo 4 and solve the problem manually (then for cases n=0 and n=3 the answer is 0 and for n=1 and n=2 the answer is 1).

// Prove: Let's see what can we make for numbers n, n−1, n−2 and n−3. We can add n and n−3 in A and add n−1 and n−2 in B. Then the difference between sums will be 0. We can consider last four numbers this way until we have at least four numbers. And then we have a case n≤3. We can prove the solution for these four cases using bruteforce.