#include <iostream>
using namespace std;

int xton(int x, int n) {
  if (n == 0)
    return 1;
  else if (n < 0)
    return 0;
  else
    return x*xton(x, n-1);
}

int main() {
  int x, n, ans;
  cout << "Please enter an integer." << endl; 
  cin >> x;
  cout << "Please enter a natural number." << endl;
  cin >> n;
  if (n < 0) {
    cout << "The value you entered was not accepted! Try entering a natural number next time." << endl;
  }
  ans = xton(x,n);
  cout << x << "^" << n << " = " << ans << endl;
  return 0;
}
