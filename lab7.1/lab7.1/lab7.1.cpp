#include "stdafx.h"
#include <iostream> 
using namespace std;


template<class T>
void quickSortR(T* a, long N) {
	// �� ����� - ������ a[], a[N] - ��� ��������� �������.

	long i = 0, j = N - 1; 		// ��������� ��������� �� �������� �����
	T temp, p;

	p = a[N >> 1];		// ����������� �������

						// ��������� ����������
	do {
		while (a[i] < p) i++;
		while (a[j] > p) j--;

		if (i <= j) {
			temp = a[i]; a[i] = a[j]; a[j] = temp;
			i++; j--;
		}
	} while (i <= j);


	// ����������� ������, ���� ����, ��� ����������� 
	if (j > 0) quickSortR(a, j);
	if (N > i) quickSortR(a + i, N - i);
	
}



int main()
{
	double a[] = { 1.1,2,3,7,5,6,4.15 };
	long N = 7;
	quickSortR(a,N);

	for (int i = 0; i < N; i++)//����� ������� ����� ������ ����������.
	{
		cout << a[i] << " ";
	}
	return 0;
}
