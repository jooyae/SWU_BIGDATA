#include <iostream>
using namespace std;

const int SIZE = 15;
int arr[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };

//swap �Լ� �߰� 
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
// �Լ��� �Ķ���� �Ѱ� �� �߰��߽��ϴ�. 
void quick_sort(int list[], int left, int right)
{
	/* �� ���� �˸��� ������ �߰��Ͻÿ�. partition ����� ���⿡ �ڵ带 ���� �ְų�, ���� �Լ��� ���� ���� */
	/* �Է� ����Ÿ�� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */
	//������ �����ϱ� 
	//�ε����� 0�������� �� Ȯ���ϱ� 
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
	//�������� ���� 
	quick_sort(arr,0, 15);

	cout << "\n\nSorted Data : ";
	print_data();

}
