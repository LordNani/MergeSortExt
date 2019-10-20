#include <iostream>
#include <time.h>
#include <stdio.h>
#include "MergeSorter.h"
using namespace std;

int main() {
  srand(time(0));
  int n = 0;
  cout << "Enter the N (array length): " << endl;
  cin >> n;

  int *mainArr = new int[n] {};
  int *resultArr = new int[n] {};
  fillArray(mainArr, static_cast<size_t>(n));
  resultArr = mergeSort(mainArr, static_cast<size_t>(n));

  cout << "RESULT ARR: ";
  for (int i = 0; i < n; i++) {
    cout << resultArr[i] << ", ";
  }
  return 0;
}
