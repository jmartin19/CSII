#ifndef CREATEARRAY_H_
#define CREATEARRAY_H_
#include<iostream>
#include<cmath>
using namespace std;

//creates an array based on passed in size, returns pointer to array
int* CreateArray(int size);
//calculates average of numbers in an array
double calculateAverage(int Array[], int size);
//determines quantity of numbers above average in array
int numberAboveAverage(int Array[], double average, int size);
#endif