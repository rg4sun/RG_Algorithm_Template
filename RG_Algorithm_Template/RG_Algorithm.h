#pragma once
#include<cstdio>

void showArray(int a[], int len);

void swap(int& a, int& b);
void swap(float& a, float& b);
void swap(double& a, double& b);

void selectSort(int a[], int len, bool reverse = false);
void insertSort(int a[], int len, bool reverse = false);
