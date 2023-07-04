#include <iostream>
using namespace std;

int main()
{
	//Дополнительные задания:

	//Доп 1
	//int num, sum = 0;
	//cin >> num;
	//int* arr = new int[num];
	//for (int i = 0; i < num; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < num; i++)
	//{
	//	if (arr[i] % 2 == 0)
	//		sum += arr[i];
	//}
	//cout << sum;

	//Доп 2
	//int num, c;
	//cin >> num;
	//int* arr = new int[num];
	//for (int i = 0; i < num; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = num - 1; i >= 0; --i)
	//{
	//	if (arr[i] < 0)
	//	{
	//		cout << i + 1 << endl;
	//	}
	//}

	//Доп 3
	float num;
	cin >> num;
	int max = 0, min = 0;
	float* arr = new float[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		if (arr[i] > arr[max])
		{
			max = i;
		}
		if (arr[i]<arr[ min])
		{
			min = i;
		}
	}
	cout << abs(min - max) - 1 << endl;
	delete[]arr;	
}
