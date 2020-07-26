#pragma once
#include<cstdio>

void showArray(int a[], int len);

void mySwap(int& a, int& b);
void mySwap(float& a, float& b);
void mySwap(double& a, double& b);

void selectSort(int a[], int len, bool reverse = false);
void insertSort(int a[], int len, bool reverse = false);
