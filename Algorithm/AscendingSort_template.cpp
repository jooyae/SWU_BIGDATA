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

void Swap(int &a, int&b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void sort()
{
	/* 선택 정렬 프로그램 완성하기 */
	/* 입력 데이타는 L[]에 들어 있으면, 전체 원소 개수는 SIZE이다. */
	// 배열의 인덱스는 0부터 시작된다. 
	// 오름차순으로 정렬한다. 
	int min_idx;
	for (int i = 0; i < SIZE - 1; i++) {
		min_idx = i;

		for (int j = i + 1; j < SIZE; j++) {
			if (L[min_idx] > L[j]) {
				min_idx = j;
			}
		}
		Swap(L[min_idx], L[i]);

	}




}

void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	//오름차순 정렬 
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}
