#include <iostream>
#include <time.h>
using namespace std;
void fillArray(int *pArr, size_t s) {
  for (int i = 0; i < s; i++) {
	  pArr[i] = rand() % (2 * s);
	  cout << pArr[i] << endl;
  }
}
// TODO: clear memory

int* mergeSort(int* pMain, size_t s) {
	int middle = s / 2;
	int* pLeft = pMain;
	int* pRight = pMain + middle; // may cause some troubles
	return merge(pLeft, middle, pRight, s - middle + 1); //aybe here + 0
}

int* merge(int* left, size_t l_length, int* right, size_t r_length) {
	int i, j, m;
	int* result = new int[l_length+r_length];
	while (i < l_length && j < r_length) {
		if (left[i] < right[j]) {
			result[m] = left[i];
			i++;
		}
		else {
			result[m] = right[j];
			j++;
		}
		m++;
	}
	for (m;m < l_length + r_length;m++) {
		while (i < l_length)
			result[m] = left[i];
		while (j < r_length)
			result[m] = right[j];
	}
}

int main() {
  srand(time(0));
  int n = 0;
  cout << "Enter the N (array length): " << endl;
  cin >> n;
  int *mainArr = new int[n];
  int *resultArr = new int[n];

  fillArray(mainArr, static_cast<size_t>(n));
  resultArr = mergeSort(mainArr, static_cast<size_t>(n));
  return 0;
}
