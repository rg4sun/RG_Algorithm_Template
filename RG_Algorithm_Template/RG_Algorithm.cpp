#include "RG_Algorithm.h"

void showArray(int a[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void mySwap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = a;
}

void mySwap(float& a, float& b)
{
	float tmp = a;
	a = b;
	b = a;
}

void mySwap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = a;
}

// 不能重新定义默认参数。 如果需要参数的其他值，则应将默认参数留空。
// 也就是在 头文件中 定义了默认参数，实现文件中 该默认参数留空
void selectSort(int a[], int len, bool reverse) {// reverse默认为false，升序排序
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
		//swap(a[i], a[k]);// 用这个会出错，还在找原因，因该是和c++自带的同名函数撞了
		mySwap(a[i], a[k]);
		//int tmp = a[i];
		//a[i] = a[k];
		//a[k] = tmp;
	}

}

void insertSort(int a[], int len, bool reverse)
{

}
