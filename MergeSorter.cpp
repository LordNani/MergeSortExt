#include "MergeSorter.h"

void fillArray(int *pArr, size_t s) {
  cout << "Unsorted array: ";
  for (int i = 0; i < s; i++) {
    pArr[i] = rand() % (2 * s);
    cout << pArr[i] << ", ";
  }
  cout << endl;
}
// TODO: clear memory
int *mergeSort(int *pMain, size_t size) {
	
  if (size < 2) {
	  cout << "," <<"<"<< *pMain <<  ">";
    return pMain;
  }


  size_t middle = size / 2;
  int *pLeft = pMain;
  int *pRight = pMain + middle; // may cause some troubles
  int *mergeSortLeft = mergeSort(pLeft, middle);
  int* mergeSortRight = mergeSort(pRight, size - middle);
  cout << "<";
  for (int i = 0; i < middle; i++) {
	  cout << mergeSortLeft[i] << ", ";
	  if (i + 1 != middle)
		  cout << ", ";
  }
  for (int i = 0; i < size - middle; i++) {
	  cout << mergeSortRight[i] ;
	  if (i + 1 != size - middle)
		  cout << ", ";
  }
  cout << ">";

  return merge(mergeSortLeft, middle, mergeSortRight,
               size - middle); // aybe here + 0
}

int *merge(int *left, size_t l_length, int *right, size_t r_length) {
  int i = 0, j = 0, m = 0;
  int *result = new int[l_length + r_length];
  while (i < l_length && j < r_length) {
    if (left[i] < right[j]) {
      result[m] = left[i];
      i++;
    } else {
      result[m] = right[j];
      j++;
    }
    m++;
  }
  while (m < l_length + r_length) {
    while (i < l_length) {
      result[m] = left[i];
      i++;
      m++;
    }
    while (j < r_length) {
      result[m] = right[j];
      j++;
      m++;
    }
  }
  cout << "<";
  for (int i = 0; i < l_length + r_length; i++) {
	  cout << result[i];
	  if (i + 1 != l_length + r_length)
		  cout << ", ";
  }
  cout << ">";
  return result;
}

void findPair(int* arr, ) {

}