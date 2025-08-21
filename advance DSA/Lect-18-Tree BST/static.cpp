#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    // Static variable
     static int count = 0;

    // The value will be updated and carried over
  	// to the next function call
    count++;
  	cout << count << " ";
}

int main() {
  
        solve();
        solve();
        solve();
}