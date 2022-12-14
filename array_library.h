//
// Created by Carlos R. Arias on 10/5/22.
//

#ifndef ARRAY_LIBRARY_01_ARRAY_LIBRARY_H
#define ARRAY_LIBRARY_01_ARRAY_LIBRARY_H

#include <iostream>
using std::ostream;
using std::istream;

/**
 * This function is going to do a sequential search over an array
 * of integers.
 * @param array the array of integers
 * @param size the number of elements of the array
 * @param key the integer we are looking for
 * @return the position of key if found, -1 otherwise
 */
int LinearSearch(int array[], unsigned int size, int key);

int FindMax(int array[], unsigned int size);
int FindMin(int array[], unsigned int size);
double FindAverage(int array[], unsigned int size);
void SelectionSort(int array[], unsigned int size);
double FindMedian(int array[], unsigned int size);
int BinarySearch(int array[], unsigned int size, int key);
void PrintArray(ostream& output, int array[], unsigned int size);
void ReadArray(istream& input, int array[], unsigned int size);


#endif //ARRAY_LIBRARY_01_ARRAY_LIBRARY_H
