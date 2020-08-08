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
	b = tmp;
}

void mySwap(float& a, float& b)
{
	float tmp = a;
	a = b;
	b = tmp;
}

void mySwap(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
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
		swap(a[i], a[k]);// 用这个会出错，还在找原因，因该是和c++自带的同名函数撞了
		// 哦不是这个原因，是写的swap写智障了。，。
		/*int tmp = a;
		a = b;
		b = a;*/
		//mySwap(a[i], a[k]);
		//int tmp = a[i];
		//a[i] = a[k];
		//a[k] = tmp;
	}

}

void insertSort(int a[], int len, bool reverse)
{
	for (int i = 1; i < len; i++) {
		int j = i + 1, tmp = a[i]; // 先i+1是为了 用--j
		if (reverse) {
			while (--j && tmp > a[j - 1]) {
				a[j] = a[j - 1]; // i前面的，j后面的整体后移
			}
		}
		else {
			while (--j && tmp < a[j - 1]) {
				a[j] = a[j - 1];
			}
		}
		a[j] = tmp;
	}
}

void generateP(int index, int n, int p[], bool hashTabe[])
{
	if (index == n + 1) {
		for (int i = 1; i <= n; i++) {
			printf("%d", p[i]);
		}
		printf("\n");
		return;
	}
	for (int x = 1; x <= n; x++) {
		if (hashTabe[x] == false) {
			p[index] = x;
			hashTabe[x] = true;
			generateP(index + 1, n, p, hashTabe); // 这里进入递归
			hashTabe[x] = false; // 处理完 p[index]的子问题，还原hash表
		}
	}
}

void showFullPermutation(int n)
{
	int* p = (int*)malloc(n+1 * sizeof(int)); // 因为要取到n号下标
	bool* hashTabe = (bool*)malloc(n+1 * sizeof(bool));// 因为要取到n号下标
	for (int i = 0; i <= n + 1; i++) {
		hashTabe[i] = false;
		p[i] = 0;//顺手也把排列数组置为0吧
	}
	generateP(1, n, p, hashTabe);// 调用 递归函数
}
