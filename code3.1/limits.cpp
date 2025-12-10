// limits.cpp -- some integer limits
#include <climits> // use limits.h for older systems
#include <iostream>
int main() {
  using namespace std;
  int n_int = INT_MAX;      // initialize n_ints to max int value
  short n_short = SHRT_MAX; // symbols defined in climits file
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  return 0;
}