#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
// WRITE YOUR CODE HERE
  int x;
  while (cin >> x && x > 0) {
      int additive_persistence = 0;
      while (x >= 10) {
        int curr_sum = 0;
        while (x) {
          curr_sum += x % 10;
          x /= 10;
        }
      additive_persistence ++;
      x = curr_sum;
      }
      //at the end of this loop, end up with additive root
  cout << additive_persistence << ' ' << x << endl;
  }
  return 0;
}
