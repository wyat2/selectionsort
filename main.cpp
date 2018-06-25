// Selection sort

#include <iostream>

using namespace std;

int* selectionsort(int* &list, int size)
{
	int temp = 0;
	int min = 0;

	for (int i = 0; i < size-1; ++i)
	{
		min = i;

		for (int x = i + 1; x < size; ++x)
			if (list[x] < list[min])
				min = x;

		//swap
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}

	return list;
};

int main()
{
	int* mylist = new int[8];
	mylist[0] = 3;
	mylist[1] = 6;
	mylist[2] = 1;
	mylist[3] = 9;
	mylist[4] = 8;
	mylist[5] = 7;
	mylist[6] = 5;
	mylist[7] = 10;

	cout << "START" << endl;
	cout << "[" << mylist[0] << "," << mylist[1] << "," << mylist[2] << "," << mylist[3]
		<< "," << mylist[4] << "," << mylist[5] << "," << mylist[6] << "," << mylist[7] << "]" << endl;

	selectionsort(mylist, 8);

	cout << "After" << endl;
	cout << "[" << mylist[0] << "," << mylist[1] << "," << mylist[2] << "," << mylist[3]
		<< "," << mylist[4] << "," << mylist[5] << "," << mylist[6] << "," << mylist[7] << "]" << endl;

	cout << "End of program" << endl;
	int x;
	cin >> x;
	return 0;
}
