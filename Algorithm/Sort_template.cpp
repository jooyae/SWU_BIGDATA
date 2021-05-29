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
	/* 이 곳에 알맞은 내용을 추가하시오. */
	int i;
	int j;
	int temp;

	/* 입력 데이타는 L[]에 들어 있으면, 전체 원소 개수는 SIZE이다. */
	for (int i = 1; i < SIZE; i++) {
		temp = L[i];
		j = i;
		while (j > 0 && L[j - 1] > temp) {
			L[j] = L[j - 1];
			j--;
		}
		L[j] = temp;
	}

}

int main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	//가장 작은 값을 맨 앞으로 보내는 순서대로 출력한다. 
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}
