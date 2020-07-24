#pragma warning(disable : 4996) // 弃用VS的安全措施，使scanf等原生C函数可用
#include<cstdio>
#include "RG_Algorithm.h"

void selectSortTest() {
	int a[7] = { 7,131,1445,132,90,99,1 };
	selectSort(a, 7);
	showArray(a, 7);
}

int main() {
	selectSortTest();
	return 0;
}