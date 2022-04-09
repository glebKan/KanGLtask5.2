#include "pr52.h"

int main()
{
	int n = 12;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	print(arr, n);
	replace(arr, n);
	print(arr, n);
}