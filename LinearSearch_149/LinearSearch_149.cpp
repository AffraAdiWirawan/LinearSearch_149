#include<iostream>

using namespace std;

int arr[20]; 
int n;
int i;

void input() {
	while (true)
	{
		cout << " enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n >= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 element.\n\n";
	}
	cout << "\n----------------------\n";
	cout << " Enter Array Elements\n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch() {
	char ch;
	int ctr;

	do
	{
		cout << "\nEnter the element you want to search :";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons : " << ctr << endl;

		cout << "\nContinue search (y/n) :";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}