#include <iostream>
#include <time.h>
using namespace std;
void fillArray(int *pArr, size_t s) {
  for (int i = 0; i < s; i++) {
	  pArr[i] = rand() % (2 * s);
	  cout << pArr[i] << endl;
  }
}
int main() {
  srand(time(0));
  int n = 0;
  cout << "Enter the N (array length): " << endl;
  cin >> n;
  int *mainArr = new int[n];

  fillArray(mainArr, static_cast<size_t>(n));
  return 0;
}
