#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void sort()
{
	/* �������� ���α׷� �ϼ��ϼ��� */
	/* �Է� ����Ÿ�� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */
	int i, j;
	int key;
	for (i = 1; i < SIZE; i++) {
		key = L[i];
		for (j = i - 1; j >= 0; j--) {
			if (L[j] > key) {
				L[j + 1] = L[j];
			}
			else {
				break;
			}
		}
		L[j + 1] = key;
	}



}

void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	//���� ������ �������� �����ض�
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}
