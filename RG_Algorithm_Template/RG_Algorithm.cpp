#include "RG_Algorithm.h"

void showArray(int a[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = a;
}

void swap(float& a, float& b)
{
	float tmp = a;
	a = b;
	b = a;
}

void swap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = a;
}

void selectSort(int a[], int len, bool reverse = false) {// reverse默认为false，升序排序
	for (int i = 0; i < len; i++) {// len趟操作
		int k = i;// k记录i位置后续序列中的max值下标，初始置为i
		for (int j = i; j < len; j++) {
			if (reverse) {// 降序
				if (a[k] < a[j])
					k = j;
			}
			else {
				if (a[k] > a[j])
					k = j;
			}
		}
		swap(a[i], a[k]);
	}

}