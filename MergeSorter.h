#pragma once
#include <iostream>
#include <stdio.h>
using namespace std;
void fillArray(int* pArr, size_t s);
int* mergeSort(int* pMain, size_t s);
int* merge(int* left, size_t l_length, int* right, size_t r_length);
void findPair();