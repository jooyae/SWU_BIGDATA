#include <iostream>
using namespace std;

const int SIZE = 15;
int arr[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };

//swap 함수 추가 
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << arr[i] << " ";
	cout << endl;
}
// 함수에 파라미터 한개 더 추가했습니다. 
void quick_sort(int list[], int left, int right)
{
	/* 이 곳에 알맞은 내용을 추가하시오. partition 기능은 여기에 코드를 직접 넣거나, 별도 함수로 구현 가능 */
	/* 입력 데이타는 L[]에 들어 있으며, 전체 원소 개수는 SIZE이다. */
	//퀵정렬 구현하기 
	//인덱스가 0부터인지 꼭 확인하기 
	if (left >= right)
		return;
	int pivot = left;
	int start = left + 1;
	int end = right;
	while (start <= end)
	{
		while (list[pivot] >= list[start] && start <= right)
			start++;
		while (list[pivot] <= list[end] && end > left)
			end--;
		if (start > end)
		{
			swap(list[pivot], list[end]);
		}
		else
			swap(list[start], list[end]);
	}
	quick_sort(list, left, end - 1);
	quick_sort(list, end + 1, right);



}

int main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	//오름차순 정리 
	quick_sort(arr,0, 15);

	cout << "\n\nSorted Data : ";
	print_data();

}
