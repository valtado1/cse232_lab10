#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
// WRITE YOUR CODE HERE
  int x;
  while (cin >> x && x > 0) {
      int ap = 0;
      while (x >= 10) {
        int sum = 0;
        while (x) {
          sum += x % 10;
          x /= 10;
        }
      ap ++;
      x = sum;
      }
      //at the end of this loop, end up with additive root
  cout << ap << ' ' << x << endl;
  }
  return 0;
}
